#include <stdio.h>
#include "ANSIC.h"

void canvas(int width, int hight, int limit) {
	for (int h = 0; h < hight; h++) {
		/* aligment bias */
		for (int l = 0; l < limit; ++l)
			putchar(' ');
		for (int w = 0; w < width; w++) {
			/* focus on corners */
			if ((w == 0 && h == 0)
			||  (w == width - 1 && h == 0)
			||  (h == hight - 1 && w == 0)
			||  (w == width - 1 && h == hight - 1))
				putchar('+');
			/* actual border */
			else if (w == 0 || w == width - 1) putchar('|');
			else if (h == 0 || h == hight - 1) putchar('-');
			/* central star expected by robust design */
			else if (w == width/2 - 1 && h == hight/3)
				printf(BHMAG "*" CRESET);
			/*** blueprint ***/
			else putchar('.');
		}
		putchar('\n');
	}
}
