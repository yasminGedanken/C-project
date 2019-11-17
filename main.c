#include <stdio.h>
#include "myMath.h"

int main()
	{
	printf("Enter a number: /n");
	double x=0;
	scanf("%lf", &x);
	double firstFunction=0;
	firstFunction=(sub(add(Exp(x),Pow(x,3)),2));

	double secondFunction=0;
 	secondFunction= (add(mul(3,x),mul(2,Pow(x,2))));

	double thirdFunction=0;
	thirdFunction=(sub(div(mul(4,Pow(x,3)),5),mul(2,x)));

	printf("The value of f(x)=e^x+x^3-2 at the point %f is: %f: \n",x, firstFunction);
	printf("The value of f(x)=3x+2x^2 at the point %f is: %f: \n",x, secondFunction);
	printf("The value of f(x)=(4x^3)/(5-2x) at the point %f is: %f: \n",x, thirdFunction);
	
	}
