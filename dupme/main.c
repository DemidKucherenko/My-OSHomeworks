#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
                 /*
int parseInt(char* s) {
	int x = 0;
	int i;
	for (i = 0; s[i] != '\0'; i++) {
		x = x * 10 + (s[i] - 48);
	}
	return x;
}
                   */

void writeln() {
    write(1, "\n", 1);
}
int main (int argc, char* argv[]) {
	int k = atoi(argv[1]);
	char* buffer = malloc(k + 1);
	while (true) {
		int r = read(0, buffer + len, k - len);
		if (r == 0) {
			if (len > 0 && cur = 1) {
	                	writeStr(0, len);
				writeln;
				writeStr(0, len);
				writeln;
			}
			return 0;
		}

	}
	printf("%d", k);
}	