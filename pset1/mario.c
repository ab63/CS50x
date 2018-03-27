#include <stdio.h>
#include <cs50.h>

int main(void)

{

int height;
do

   {
      printf("Height:");

      height=get_int();
   }

while (height<0 || height>23);

for (int rows=0; rows<height; rows++)
  {
    for (int spaces=0; spaces<height-rows-1; spaces++)
    printf(" ");
     
    for (int hash=0; hash<rows+1; hash++)
    printf("#");
     
    printf("  ");
     
    for (int hash=0; hash<rows+1; hash++)
    printf("#");
     
    printf("\n");
     
  }
     
}