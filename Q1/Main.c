#include <ctype.h>
#include <stdio.h>

int main() {
	char string[80] = "";

	printf("Enter a sentence > ");
	gets(string);

	for (int i = 0; string[i] != '\0'; i++) {
		string[i] = toupper(string[i]);
	};

	printf("%s!!!\n", string);
}