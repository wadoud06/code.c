#include <stdio.h>

int  fact (int n)
{
if (n==0 || n==1)
{return 1;}
else 
{return n*fact (n-1);}
}

  /// @brief 
  /// @return 
  int main (){int i ;
  for(i=1; i<=5; i++) {
  int a;
  
  printf("donnez un numéro%d:",i);
scanf ("%i" ,&a);
printf("le factorelle est:%i\n",fact (a));
  }

return 0;
}
    