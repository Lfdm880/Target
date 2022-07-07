#include <stdio.h>
#include<stdlib.h>

int
main (void)
{
  double sp = 67846.43, rj = 36678.66, mg = 29229.88, es = 27165.48, oth =
    19849.53, sum = 0;
  //double= psp=0;prj=0,pmg=0,pes=0;

  sum = sp + rj + mg + es + oth;
  //printf("%f", sum);
  printf ("A participacao de Sp foi de %f porcento\n", (sp / sum) * 100);
  printf ("A participacao do RJ foi de %f porcento\n", (rj / sum) * 100);
  printf ("A participacao de MG foi de %f porcento\n", (mg / sum) * 100);
  printf ("A participacao do ES foi de %f porcento\n", (es / sum) * 100);
  printf ("A participacao de outros foi de %f porcento\n", (oth / sum) * 100);
  return 0;
}