#include <stdio.h>

int main()
{                                           
    int variable1;                        //To use a variable in a program we have to declare it 
    int variable2;                        //first. We will take 2 integer variables


    printf("Enter any number : ");         //The text will be shown to the user to input a value
    scanf("%d",&variable1);               //Value given by the user will be stored in the variable

    printf("Enter another number : ");
    scanf("%d",&variable2);

  
    int sum = variable1 + variable2;       // We have performed addition and stored result in 'sum'

    printf("Addition of the given numbers = %d", sum);    //User will see the result

    return 0;
}
