#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //Validate command-line arguments
    if (argc != 2)
    {
         printf("Usage: ./caesar key\n");
        return 1;
    }


    bool isDigit = true;       //Detect non-digit cmd-line arguments
    for (int i = 0, n = strlen(argv[1]); i < n ; i++)
    {
        if (isdigit(argv[1][i]) == 0)
        {
            isDigit = isDigit && false;
        }
        else
        {
            isDigit = isDigit && true;
        }
    }

    int arg = atoi(argv[1]);  //Convert String to int

    if (arg < 0 || !isDigit )  //Check for possible values
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }





    ///////////////////////////////////////////

    int key = arg;
    string pt = get_string("plaintext: ");
    char ct[strlen(pt)];


    for (int i = 0, n = strlen(pt); i < n; i++ )
    {
        bool isLower = islower(pt[i]);
        int updatedCharCode =  toupper(pt[i]) + key;

        if (toupper(pt[i]) > 64 && toupper(pt[i]) <= 90) //Only Change Alphabet
        {
            if (updatedCharCode - 64  > 26)             //Character code excedes Z(26)
            {
               ct[i] = (char)(((updatedCharCode - 64) % 26) + 64 );
            }
            else
            {
                ct[i] = (char)(updatedCharCode);
            }

            if(isLower)       //Convert lowercase letters back to lowercase
            {
             ct[i] = tolower(ct[i]);
            }
        }
        else
        {
            ct[i] = pt[i];
        }
    }

  //print ciphertext
    printf("ciphertext: ");
    for (int i = 0, n = strlen(pt); i < n; i++ )
    {
        printf("%c",ct[i]);
    }
     printf("\n");

     return 0;
}



