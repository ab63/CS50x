#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)

{
 //Get name of user
    string name= get_string();
 
 //Print first letter of First Name
    printf("%c", toupper(name[0]));
    
    //Loop through rest of the name
    for (int i=0; i<strlen(name); i++)
    {
        //Look for Space and print First letter of middle or last name
        if (name[i] == ' ')
        {
            printf("%c", toupper(name[i+1]));
        }
    }
    printf("\n");
}