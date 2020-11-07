#include "ftm.h"
#include <math.h>

float Rechteck_Iy(Rechteck r) {

	return pow(r.laenge, 3) * r.breite / 12;
	
}

float Rechteck_Iz(Rechteck r) {

	return pow(r.breite, 3) * r.laenge / 12;
	
}
