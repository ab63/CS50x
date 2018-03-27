#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
    // Getting proper command line input from user
{
    if (argc != 2)
    {
        printf("Error \n");
        return 1;
    }
    
    // Converting argv to integer 
    int key = atoi(argv[1]);
    
    // Getting Plain Text as input
    printf("plaintext:");
    string plaintext= get_string();
    
    printf("ciphertext:");
    
    for (int i=0; i < strlen(plaintext); i++)
    // Checking if each character of plain text is an alphabet
    
    {
        if isalpha(plaintext[i])
        {
     // Checking if the alphabet is upper case and printing cypher text
                if isupper(plaintext[i])
                {
                printf("%c", ((plaintext[i] - 65 + key) %26) + 65 );
                }
     // Checking if the alphabet is lower case and print cypher text

                 else 
                 {
                 printf("%c", ((plaintext[i] - 97 + key) %26) + 97 );
                 }
        }
    // Retaining any other character as is        
            else
            {
             printf("%c", (plaintext[i]));
            }
    }
    printf("\n");
    
    return 0;
}