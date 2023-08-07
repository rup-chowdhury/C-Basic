#include <stdio.h>
int main()
{
    int m,p,c,total;

    printf("Enter number in math:");
    scanf("%d",&m);
    printf("Enter number in physics:");
    scanf("%d",&p);
    printf("Enter number in chemistry:");
    scanf("%d",&c);

    total=m+p+c;

    if((m>=60 && p>=50 && c>=40 && total>=200) || (m+p)>=150){
        printf("The candidate is eligible.");
    }
    else{
        printf("The candidate is not eligible.");
    }
    return 0;

}
