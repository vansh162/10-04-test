#include <stdio.h>

int main()
{
    int age;
    printf("Let's chech whether you can marry or not? (only for boys)\n");
    printf("Enter your age:");
    scanf("%d",&age);
    
    age>=21? printf("Congo!! Tum shadi kar sakte ho."):printf("Abhi thodi dher hai. Abhi tum shadi nai kar sakte.");
    return 0;
}
