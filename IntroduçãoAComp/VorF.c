#include <stdio.h>

int main()
{
       int a;
       int b;
       int c;
       int s;
       
       
       
       printf("Entre com o valor de a:");
       scaf("%d " ,&a);
       printf("Entre com o valor de b:");
       scanf("%d ",&b);
       printf("Entre com o valor de c:");
       scanf("%d ", &c);
       
       s = (a|b)&&(!b|c);
       
      printf("\nSaida %d" ,s);

	  return 0;
}
              
       
