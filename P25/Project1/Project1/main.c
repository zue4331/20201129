#include <stdio.h>
#include <time.h>


const char *s[4] = { "Hearts", "Diamonds", "Cluds", "Spades" };
const char *f[13] = { "Ace", "Deuce", "Three", "Four", "Five",
					  "Six", "Seven", "Eight", "Nine", "Ten",
					  "Jack", "Queen", "King", };
int deck[4][13] = { 0 };

void sh(int a[][13]) {
	int r, co;
	
	for (int i = 0; i < 52; i++) {
		do {
			r = rand() % 4;
			co = rand() % 13;
		} while (a[r][co] != 0);
		a[r][co] = i;
	}
}

void d(const int a[][13], const char *wf[], const char *ws[]) {
	int r, co;

	for (int i = 0; i < 52; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 12; k++) {
				if (a[j][k] == i)
					printf("%5s of %-8s%c", wf[k], ws[j],
						i % 2 == 0 ? '\n' : '\t');
			}
		}
	}
}

int main(void) {
	srand(time(0));

	sh(deck);
	d(deck, f, s);
	return 0;
}