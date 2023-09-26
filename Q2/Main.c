#include <stdio.h>
#include <string.h>

int main() {
	char password[] = "aPassword";
	char input[20];

	printf("Enter password > ");
	scanf("%s", &input);

	if (strcmp(password, input) == 0) {
		printf("WELCOME TO PCD 1!\n");
	} else {
		printf("ACCESS DENIED!!!\n");
	}
}