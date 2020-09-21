    #include <cs50.h>
    #include <stdio.h>


    float start=0;
    float end=0;
    int years = 0;
    int get_number(string message);

    int main(void)
    {
        start = get_number("Starting: ");
        end = get_number("Ending: ");

        if(end == start){
            years = 0;
        }else {
            do
        {
          start += start/12;

         if((int)start <= (int)end)
         {
           years++;
         }
        }
        while((int)start <= (int)end);
        }

        printf("Years: %i", years);
    }

    int get_number(string message)
    {
        int n;
        do{
            n = get_int("%s",message);
        }
        while(n<9 || n<start);

        return n;
    }