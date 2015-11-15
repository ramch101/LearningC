#include <stdio.h>
#include "complex.h"

int main(void)
{
/************************************************************************************
* Function: int main(void)
* Input : none
* Output : Returns 0 on success
* Procedure: Performs operations on complex numbers and prints results.
************************************************************************************/
test();
return 0;
}

complex mult2(complex *a,  complex *b) {
	complex temp;
	temp.x = a->x*b->x - a->y*b->y;
	temp.y = a->x*b->y+a->y*b->x;
	return(temp);
}
complex square(complex a) {
	complex temp;
	temp.x = a.x*a.x - a.y*a.y;
	temp.y = 2*a.x*a.y;
	return(temp);
}
complex add2(complex *a, complex *b) {
	complex temp;
	temp.x = a->x + b->x;
	temp.y = a->y+b->y;
	return(temp);
}
complex juliamap(complex a, complex b) {
	complex temp, temp2;
        temp2 = square(a);
	temp = add2(&temp2,&b);
	return(temp);
}
void complex_print(const complex z) {
	printf ("The complex function is %.1Lf+%.1Lfi\n",z.x,z.y);
}
void test() {
complex a, b;
a.x = 2.0;
a.y = 3.0;
b.x = 4;
b.y = 5;
printf("Enter a and b where a + ib is the first complex number.\n");
printf("a = ");
scanf("%Lf", &a.x);
printf("b = ");
scanf("%Lf", &a.y);
printf("Enter c and d where c + id is the second complex number.\n");
printf("c = ");
scanf("%Lf", &b.x);
printf("d = ");
scanf("%Lf", &b.y);
printf (" The complex numbers entered are :%.1Lf %+.1Lf and %.1Lf %+.1Lfi\n", a.x,a.y,b.x,b.y);
printf ("The multiplication of complex numbers are :%.1Lf %+.1Lfi\n", mult2(&a,&b).x, mult2(&a,&b).y);
printf ("The square of complex number is :%.1Lf %+.1Lfi\n", square(a).x, square(a).y);
printf ("The addition of complex numbers are :%.1Lf %+.1Lfi\n", add2(&a,&b).x, add2(&a,&b).y);
printf ("The juliamap of complex numbers are :%.1Lf %+.1Lfi\n", juliamap(a,b).x, juliamap(a,b).y);
complex_print(a);
complex_print(b);
}
