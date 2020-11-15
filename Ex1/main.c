#include <stdio.h>
#include "myMath.h"

int main(){

double x;
printf("Enter a real number x:");
scanf("%lf",&x);

	double y1 = sub(add(Exponent((int)x),Power(x,3)),2);
	double y2 = add(mul(x,3),mul(Power(x,2),2));
	double y3 = sub(div(mul(Power(x,3),4),5),mul(x,2));

	printf("\n The value of f(x)= e^x +x^3 -2 at the point %0.4f is: %0.4f",x,y1);
	printf("\n The value of f(x)= 3x + 2x^2 at the point %0.4f is: %0.4f",x,y2);
	printf("\n The value of f(x)= (4x^3)/5 - 2x at the point %0.4f is: %0.4f",x,y3);


	return 0;
}