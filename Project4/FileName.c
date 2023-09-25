#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES 
void main()
{
	float F, x, y;
	setlocale(LC_ALL, "Russian");
	printf("¬ведите x: ");
	scanf("%f", &x);
	printf("¬ведите y: ");
	scanf("%f", &y);
	F = 1 + pow(tan(y+x/(pow(y,2)+fabs((pow(x,2)/y+(pow(x,3)/3))))), 2);
	printf("%.5f", F);
}