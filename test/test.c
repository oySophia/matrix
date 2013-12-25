#include "../get_matrix.h"

int main() {
	int m = 12, n = 10;

	double *matrix;;
	matrix = (double *) malloc (sizeof(double) * m * n);

	generate_matrix(matrix, m, n, 1, 0.001);
	printf("1\n");
	return 0;
}
