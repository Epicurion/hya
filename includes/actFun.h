#ifndef ACTFUN
#define ACTFUN

// Heaviside
int heaviside(double z);

// Sigmoids
double sigmoide(double z);
double tanh(double z);

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

#endif
