#include <stdio.h>
#include "ftm.h"

int main() {
	
	Rechteck r;
	printf("Geben Sie die Laenge des Rechtecks ein.\n");
	scanf("%f", &r.laenge);
	printf("Geben Sie die Breite des Rechtecks ein.\n");
	scanf("%f", &r.breite);

	printf("Iy = %f\nIz = %f\n", Rechteck_Iy(r), Rechteck_Iz(r));
	
}
