#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int parseInt(char* s) {
	int x = 0;
	int i;
	for (i = 0; s[i] != '\0'; i++) {
		x = x * 10 + (s[i] - 48);
	}
	return x;
}

int main (int argc, char * argv[]) {
	int k = parseInt(argv[1]);
	printf("%d", k);
}	