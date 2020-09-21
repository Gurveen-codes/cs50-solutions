#include <cs50.h>
#include <stdio.h>

void make_pyramid(int n);
int get_valid_input(void);

int main(void)
{
  make_pyramid(get_valid_input());

}

void make_pyramid(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= n+2+i; j++)
        {
            if ((j >= n-i-1 && j < n) || (j>n+1 && j <= n+i+2))
            {
                printf("%s","#");
            }
            else
            {
                 printf("%s", " ");
            }

       }
        printf("\n");
    }
}

int get_valid_input(void)
{
    int number;
    do
    {
     number = (int)get_int("Height: ");
    }
    while(number <= 0 || number > 8);

    return number;
}