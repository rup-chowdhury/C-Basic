#include <stdio.h>

int main()
{
    int m,n;

    printf("Enter two numbers :");
    scanf("%d %d",&m,&n);

    if(m%n==0) {
        printf("m is multiple of n");
    }
    else{
        printf("m is not multiple of n");
    }

    return 0;
}