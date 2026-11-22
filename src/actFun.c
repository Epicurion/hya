#include <math.h>
#include "actFun.h"

// Heaviside
int heaviside(double z) {
	if (z < 0) {
		return 0;
	} else {
		return 1;
	}
}

// Sigmoids
double sigmoide(double z) {
	return 1 / (1 + exp(-z));
}

double tanh(double z) {
	double pos = exp(z);
	double neg = exp(-z);
	return (pos - neg) / (pos + neg);
}

// Relu like
double relu(double z);
double reluLeaky(double z);
double prelu(double z);
double elu(double z);
double selu(double z);

// Gelu like
double softplus(double z);
double gelu(double z);
double silu(double z);
double mish(double z);
double sinCard(double z, double beta);

// 

