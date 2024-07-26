// LINEAR REGRESSION

//y = a_0 + a_1*x -> bias + slope*x
//we are going to find best bias and slope for our dataset. For that we need loss function.
//we need to minimize our loss function. 

#include <iostream>
#include <cstdlib>
#include<cmath>

//Generating random data for start
int generate_random_data(float** x, float** y, int length, float ideal_bias, float ideal_slope, float noise) {

	*x = new float[length];
	*y = new float[length];

	srand(static_cast<unsigned>(42));

	for (int i = 0; i < length; i++) {
		(*x)[i] = static_cast<float>(rand()) / RAND_MAX * 10; //x values between 0 and 10
		(*y)[i] = ideal_bias + ideal_slope * (*x)[i] + (static_cast<float>(rand()) / RAND_MAX * 2 - 1) * noise;
		//y = ideal_bias + ideal_slope * x + noise

	}
	return length;
}

//To find gradients we need to find biass difference and slope difference
float bias_diff(const float* y_predictions, const float* y_ideal, int lenght) {
	float sum = 0.0f;
	for (int i = 0; i < lenght; i++) {
		sum += (y_predictions[i] - y_ideal[i]);
	}
	return sum;
}

float slope_diff(const float* x, const float* y_predictions, const float* y_ideal, int length) {
	float sum = 0.0f;
	for (int i = 0; i < length; i++) {
		sum += (y_predictions[i] - y_ideal[i]) * x[i];
	}
	return sum;
}

void fitting(const float* x, const float* weights, float* y_prediction, int length) {

	// we will fit a line given data and weights
	for (int i = 0; i < length; i++) {
		y_prediction[i] = weights[0] + weights[1] * x[i];
		//y = b + ax
	}

}
// we are updating parameters with using formula
void update_params(const float* x, const float* y_ideal, const float* y_prediction, float* weights, float lr, int length) {

	float mult_param = 2 * lr / length;

	//updating bias
	weights[0] = weights[0] - mult_param * bias_diff(y_prediction, y_ideal, length);
	//update slope
	weights[1] = weights[1] - mult_param * slope_diff(x, y_prediction, y_ideal, length);

}


// we need to find difference y_pred and y_ideal and take their square
//mathematically
float mean_squared_error(const float* y_predictions, const float* y_ideal, int length) {
	float mse = 0.0;
	for (int i = 0; i < length; i++) {
		float error = y_predictions[i] - y_ideal[i];
		mse += error * error;
	}
	return mse / length;
}


float* linear_regression_model(float* x, float* y, int length) {
	//with this function i will return bias and slope

	auto* weights = new float[2];
	auto* y_predictions = new float[length];


	int epoch = 1000;
	float lr = 0.01f;
	//0 1 arasında rastgele değerler üretmek istiyorum
	weights[0] = static_cast <float>(rand()) / RAND_MAX; //Random bias
	weights[1] = static_cast <float>(rand()) / RAND_MAX; //Random slope


	for (int epochs = 0; epochs < epoch; ++epochs) {
		fitting(x, weights, y_predictions, length);
		update_params(x, y, y_predictions, weights, lr, length);
		float mse = mean_squared_error(y_predictions, y, length);
		if (epoch % 10 == 0) {
			std::cout << "Epoch " << epoch << ":MSE = " << mse << '\n';
		}
	}

	delete[] y_predictions;
	return weights;

}


void split(float* x, float* y, int length, float** x_train, float** y_train, float** x_test, float** y_test, int train_length, int test_length) {

	*x_train = new float[train_length];
	*y_train = new float[train_length];
	*x_test = new float[test_length];
	*y_test = new float[test_length];

	for (int i = 0; i < train_length; i++) {
		(* x_train)[i] = x[i];
		(* y_train)[i] = y[i];
	}
	for (int i = 0; i < test_length; i++) {
		(* x_test)[i] = x[train_length + i];
		(* y_test)[i] = y[train_length + i];
	}

}



int main() {
	float* x;
	float* y;
	float* x_train;
	float* y_train;
	float* x_test;
	float* y_test;
	int length = 100;

	float ideal_bias = 0.7f;
	float ideal_slope = 0.3f;
	float noise = 0.05f;

	//lets generate our data first 
	generate_random_data(&x, &y, length, ideal_bias, ideal_slope, noise);

	//train-test split
	int train_length = static_cast<int>(length * 0.8f);
	int test_length = length - train_length;

	split(x, y, length, &x_train, &y_train, &x_test, &y_test, train_length, test_length);

	//Training
	float* weights = linear_regression_model(x_train, y_train, train_length);

	//Testing
	float* y_test_predictions = new float[test_length];
	fitting(x_test, weights, y_test_predictions, test_length);
	float mse_test = mean_squared_error(y_test_predictions, y_test, test_length);
	std::cout << "Test MSE = " << mse_test << '\n';

	std::cout << "Trained model : y = " << weights[1] << "x + " << weights[0] << '\n';


	delete[] x;
	delete[] y;
	delete[] x_train;
	delete[] y_train;
	delete[] x_test;
	delete[] y_test;
	delete[] y_test_predictions;
	delete[] weights;

	return 0;

}