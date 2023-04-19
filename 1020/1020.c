#include <stdio.h>

int main()
{
 int ano, mes, dias;
   
 scanf("%d", &dias);
   
 ano = dias / 365;
   
 mes = dias % 365 / 30;
   
 dias = dias % 365 % 30;
   
 printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dias);
   
 return 0;
   
}