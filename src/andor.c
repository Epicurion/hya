#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "actFun.h"

#define NB_EPOQUES 100

double ponderee(double *x, double *w, double b, int n) {
	double z = b;
	for (int i = 0; i < n; i++) {
		z += x[i] * w[i];
	}
	return sigmoide(z);
}

int main(int argc, char **argv) {
	//Les attendus :
	double x[4][2] = {{0, 0}, {0, 1}, {1, 0}, {1, 1}};
	double attendu[4] = {0.0, 0.0, 0.0, 1.0};
	if (argc > 1 && atoi(argv[1]) == 1) {
		attendu[1] = 1.0;
		attendu[2] = 1.0;
	}
	int n = 2;
	double w[2] = {0, 0};
	double b = 0;
	double pas = 0.5;

	for (int i = 0; i < NB_EPOQUES; i++) {
		double dw1 = 0, dw2 = 0, db = 0;
		for (int j = 0; j < 4; j++) {
			double synapse = ponderee(x[j], w, b, n);
			double erreur = synapse - attendu[j];
			
			dw1 += erreur * x[j][0];
			dw2 += erreur * x[j][1];
			db += erreur;
		}
		dw1 /= 4; dw2 /= 4; db /= 4;

		w[0] -= pas * dw1;
		w[1] -= pas * dw2;
		b -= pas * db;
	}
	
	for (int i = 0; i < 4; i++) {
		printf("%d\n", ponderee(x[i], w, b, n) > 0.5 ? 1 : 0);
	}
}
