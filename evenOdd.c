#include <stdio.h>

int main()
{
    int numb;
    printf("Let's check the number you enter is even or odd.\n");
    printf("Enter the number:");
    scanf("%d",&numb);
    if(numb%2==0){
            printf("It is a EVEN number.");
    }
    else{
            printf("It is a ODD number.");
    }
    return 0;
}
