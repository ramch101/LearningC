/* structure to store the complex numbers */
struct COMPLEX {
 long double x;
 long double y;
};

typedef struct COMPLEX complex;

/* Function declaration */
/* The function mult2 and add2 should pass variables by reference as the multiplication and addition of two varables results in a third variable that will be much faster in memory.
The complex number passed to the complex_print function does not change in any form so we should pass it as a constant parameter
*/
complex mult2( complex *a,  complex *b);
complex square(complex a);
complex add2( complex *a,  complex *b);
complex juliamap( complex a,  complex b);
void complex_print(const complex z) ;
void test(void);

