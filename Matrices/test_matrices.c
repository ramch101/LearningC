#include <stdio.h>
#include "matrices.h"

int main(void) {

  // Construct a new 1x2 matrix
  MATRIX a = new_matrix(1,2);
  // Construct a new 2x1 matrix
  MATRIX b = new_matrix(2,1);

  puts("Initial matrix:");
  print_matrix(&a);
  print_matrix(&b);

  puts("Modified matrix:");
  set(&a, 0, 0, 2.0);
  set(&a, 0, 1, 2.0);
  set(&b, 1, 0, 2.0);
  print_matrix(&a);
  print_matrix(&b);

  puts("Element a(0,1):");
  print_value(get(&a, 0, 1));
  puts("");
  puts("Element b(1,0):");
  print_value(get(&b, 1, 0));
  puts("");

  puts("Multiply matrix:");
  MATRIX c = matprod(&a,&b);
  print_matrix(&c);

  // Destruct matrix when done
  delete_matrix(a);
  delete_matrix(b);
  delete_matrix(c);

  return 0;
}
