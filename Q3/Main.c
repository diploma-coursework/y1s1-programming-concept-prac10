#include <ctype.h>
#include <stdio.h>

int main() {
	char msg[] = "Cry Or Try OR Die Trying";
	int count = 0;

	for (int i = 0; msg[i] != '\0'; i++) {
		if (tolower(msg[i]) == 'r') count++;
	}

	printf("String: %s\nNumber of 'r's: %d\n", msg, count);
}