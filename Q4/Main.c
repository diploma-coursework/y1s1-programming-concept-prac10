#include <stdio.h>

int main() {
	int array[2][4];
	int largest = -_CRT_INT_MAX, smallest = _CRT_INT_MAX;
	int input;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			printf("Enter number for row %d column %d > ", i, j);
			scanf(" %d", &input);

			array[i][j] = input;
			
			if (input > largest) largest = input;
			if (input < smallest) smallest = input;
		}
	}

	printf(
		"----------------------\n"
		"| %3d  %3d  %3d  %3d |\n"
		"| %3d  %3d  %3d  %3d |\n"
		"----------------------\n",
		array[0][0], array[0][1], array[0][2], array[0][3],
		array[1][0], array[1][1], array[1][2], array[1][3]
	);

	printf("Largest Number: %d\nSmallest Number: %d\n", largest, smallest);
}