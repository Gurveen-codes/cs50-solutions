#include <cs50.h>
#include <stdio.h>
#include <string.h>


int numbers[] = {6,5,1,3,7, 2,90,32,43,18};
int len = 10;

void sort(int arr[]);

bool isSorted(int arr[]);

int main(void)
{
    sort(numbers);

    for(int i = 0; i < len; i++)
    {
        printf("%i,",numbers[i]);
    }
    printf("\n");
}

bool isSorted(int arr[])
{
    bool sorted = true;
    for(int i = 0; i < len-1; i++)
    {
        if(arr[i] < arr[i+1])
        {
            sorted = sorted && true;
        }
        else
        {
            sorted = sorted && false;
            break; 
        }
    }
    return sorted;
}

void sort(int arr[])
{
    if(isSorted(arr)){
        return;
    }
    else
    {
      for(int i = 0; i < len-1; i++)
      {

        if(arr[i] > arr[i+1])
        {
            int temp = arr[i];

            arr[i] = arr[i+1];

            arr[i+1] = temp;

        }
     }
    }
    sort(arr);
}