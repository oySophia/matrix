#include "get_matrix.h"

double d_random() {
	int a;
	double x;
	
	a = rand() % RAND_MAX;
	x = (a + 0.0) / RAND_MAX;

	return x;
}

void generate_matrix(double *mat, int rows, int cols, int mark, double sparse) {
	int i, j;
	int m, n, range, step;
	//FILE *fp;

	if(mark) { //if the mark = 1, then generator the sparse matrix, else the non-sparse matrix;
		m = 0;
		n = 0;
		for(i = 0; i < rows; ++i) {
			for(j = 0; j < cols; ++j) {
				mat[i * rows + j] = 0;
			}
		}
		range = 1 / sparse * 2;
		srand((int) time(0));
		while(1) {
			step = rand() % range;
			n += step;
			if(n >= cols) {
				n %= cols;
				m += 1;
			} else if((m != 0 || n != 0) && step == 0) {
				continue;
			}
			if(m >= rows) {
				break;
			}
			mat[m * rows + n] = (double)rand()/RAND_MAX;
		}

	} else {
		srand((int) time(0));
		for(i = 0; i < rows; ++i) {
			for(j = 0; j < cols; ++j) {
				mat[i * rows + j] = d_random();
			}
		}
	}

	for(i = 0; i < rows; ++i) {
		for(j = 0; j < cols; ++j) {
			printf("%lf\t", mat[i * rows + j]);
		}
		printf("\n");
	}
}
		

