#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
float change;
int coins=0;
int cents;

do
    {
         printf("O hai! How much change is owed? \n");

         change=get_float();
        
    }

    while (change<0);
 
    cents=(int) round (100*change);
    
    while (cents>=25)
    {
        coins++;
        cents-=25;
    }
     
      while (cents>=10)
    {
        coins++;
        cents-=10;
    }
    
      while (cents>=5)
    {
        coins++;
        cents-=5;
    }
    
      while (cents>=1)
    {
        coins++;
        cents-=1;
    }
    
    printf("%i\n", coins);
}
