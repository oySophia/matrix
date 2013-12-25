#include "../get_matrix.h"

int main() {
	int m = 12, n = 10;

	double matrix[12 * 10 + 1];
	generate_matrix(matrix, m, n, 0, 0);
	return 0;
}
