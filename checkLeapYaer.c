#include <stdio.h>

int main()
{
    int year1;
    int year2;
    printf("Let's check the year duration you enter is LEAP year or NOT.\n");
    printf("Enter the Year to start:");
    scanf("%d",&year1);
    printf("Enter the Year to end:");
    scanf("%d",&year2);
    for(int i=year1; i<=year2; i++){
    if(i%4==0){
        printf("%d",i);
        printf(" is a LEAP YEAR.\n");
    }
    }
    return 0;
}
