#include <stdio.h>


typedef struct complex {
 float x;
 float y;
}complex;

/* Function declaration */
complex mult2( complex a,  complex b);
complex square(complex a);
complex add2( complex a,  complex b);
complex juliamap( complex a,  complex b);
void complex_print( complex z) ;
void test(void);

int main(void)
{
/************************************************************************************
* Function: int main(void)
* Input : none
* Output : Returns 0 on success
* Procedure: Prints "Hello, World!" and a new line to standard output then exits.
************************************************************************************/
test();
return 0;
}

complex mult2(complex a,  complex b) {
	complex temp;
	temp.x = a.x*b.x - a.y*b.y;
	temp.y = a.x*b.y+a.y*b.x;
	return(temp);
}
complex square(complex a) {
	complex temp;
	temp.x = a.x*a.x - a.y*a.y;
	temp.y = 2*a.x*a.y;
	return(temp);
}
complex add2(complex a, complex b) {
	complex temp;
	temp.x = a.x + b.x;
	temp.y = a.y+b.y;
	return(temp);
}
complex juliamap(complex a, complex b) {
	complex temp;
	temp = add2(square(a),b);
	return(temp);
}
void complex_print(complex z) {
	printf ("The complex function is %.1f+%.1fi\n",z.x,z.y);
}
void test() {
complex a, b;
a.x = 2.0;
a.y = 3.0;
b.x = 4;
b.y = 5;
printf ("The multiplication of complex numbers are :%.1f %+.1fi\n", mult2(a,b).x, mult2(a,b).y);
printf ("The square of complex number is :%.1f %+.1fi\n", square(a).x, square(a).y);
printf ("The addition of complex numbers are :%.1f %+.1fi\n", add2(a,b).x, add2(a,b).y);
printf ("The juliamap of complex numbers are :%.1f %+.1fi\n", juliamap(a,b).x, juliamap(a,b).y);
complex_print(a);
}
