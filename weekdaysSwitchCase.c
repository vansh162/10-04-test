#include <stdio.h>

int main()
{
    int day;
    printf("Enter anyone number from 1 to 7 to display week days.\n");
    scanf("%d",&day);
    switch(day){
        case 1:{
            printf("It's Sunday.");
            break;
        }
        case 2:{
            printf("It's Monday.");
            break;
        }
        case 3:{
            printf("It's Tuesday.");
            break;
        }
        case 4:{
            printf("It's Wednesday.");
            break;
        }
        case 5:{
            printf("It's Thusday.");
            break;
        }
        case 6:{
            printf("It's Friday.");
            break;
        }
        case 7:{
            printf("It's Saturday.");
            break;
        }
    }
    return 0;
}
