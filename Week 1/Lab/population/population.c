#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int currPopulation = get_int("Start size: ");
    while(currPopulation < 9){
        currPopulation = get_int("Size is 9! \nStart size: ");
    }

    int targetPopulation = get_int("End size: ");
    while(currPopulation > targetPopulation){
        targetPopulation = get_int("End size must be bigger than start size! \nEnd size: ");
    }

    // TODO: Calculate number of years until we reach threshold
    int numOfYears=0;
    while(currPopulation < targetPopulation){
        int died = currPopulation / 4;
        int born = currPopulation / 3;

        currPopulation = currPopulation-died+born;

        numOfYears++;
    }



    printf("Years: %i\n", numOfYears);
}
