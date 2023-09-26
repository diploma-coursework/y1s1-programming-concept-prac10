#include <stdio.h>

int main() {
	int data[4][5] = {
		{ 50, 80, 100, 60, 35 },
		{ 60, 120, 90, 70, 50 },
		{ 70, 100, 110, 60, 60 },
		{ 60, 85, 80, 75, 55 }
	};

	int totalCampusA = 0, totalCampusB = 0, totalCampusC = 0, totalCampusD = 0, totalCampusE = 0;
	int totalProgram1 = 0, totalProgram2 = 0, totalProgram3 = 0, totalProgram4 = 0;

	for (int i = 0; i < 5; i++) {
		totalProgram1 += data[0][i];
		totalProgram2 += data[1][i];
		totalProgram3 += data[2][i];
		totalProgram4 += data[3][i];

		if (i > 3)  continue;
		totalCampusA += data[i][0];
		totalCampusB += data[i][1];
		totalCampusC += data[i][2];
		totalCampusD += data[i][3];
		totalCampusE += data[i][4];
	}

	int grandTotal = totalProgram1 + totalProgram2 + totalProgram3 + totalProgram4;
	
	printf(
		"Total campus A students: %d\n"
		"Total campus B students: %d\n"
		"Total campus C students: %d\n"
		"Total campus D students: %d\n"
		"Total campus E students: %d\n"
		"\n"
		"Total program 1 students: %d\n"
		"Total program 2 students: %d\n"
		"Total program 3 students: %d\n"
		"Total program 4 students: %d\n"
		"\n"
		"Grand total: %d\n",
		totalCampusA, totalCampusB, totalCampusC, totalCampusD, totalCampusE,
		totalProgram1, totalProgram2, totalProgram3, totalProgram4,
		grandTotal
	);
}