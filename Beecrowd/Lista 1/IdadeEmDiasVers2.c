#include <stdio.h>

int
main ()
{

  int IdadeD;

  scanf ("%d", &IdadeD);

  int anos = IdadeD / 365;
  int meses = (IdadeD % 365) / 30;
  int dias = (IdadeD % 365) % 30;


  printf ("%i ano(s)\n", anos);
  printf ("%i mes(es)\n", meses);
  printf ("%i dia(s)\n", dias);

  return 0;
}
