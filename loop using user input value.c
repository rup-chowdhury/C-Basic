#include <stdio.h>

int main()
{
    int limit;               //This variable will store the value of the upper limit of the loop
    int loop_value;          //Loops will be run depending on it's value

    printf("Enter the value of the Highest value of the loop : ");
    scanf("%d",&limit);


    for(loop_value=0;loop_value<=limit;loop_value++)    //Using for to run a loop starting from 0
    {                                                   //to the value of variable "limit"
        printf("\n%d",loop_value);
    }
    return 0;
}
