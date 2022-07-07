#include <stdio.h>
#include<stdlib.h>

int main(void)
{
   int num, a=0, b=1, c;

   scanf("%d", &num);
   
   if(num<0)
        printf("Este numero eh invalido\n");
    else
    while(b<num)
    {
        c=b+a;
        printf("%d\n", c);
        a=b;
        b=c;
    }
    

    return 0;
}
