#include <stdio.h>
#include <string.h>

void funkcja(char *tekst) {
	char bufor[16];
	strcpy(bufor, tekst);
	printf("Wpisałeś: %s\n", bufor);
}

int main(int argc, char *argv[]) {
	if (argc > 1) funkcja(argv[1]);
	else printf("Podaj tekst jako argument programu.\n");
	return 0;
}
