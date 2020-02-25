#include<stdio.h>
int main()
{
    int i, space, j, k=0;
    printf("Enter number of rows: ");
    scanf("%d", &j);
    for (i=1; i<=j; ++i,k=0) {
        for (space=1; space<=j-i; ++space)
        { printf("  "); }
        while (k!=2*i-1) 
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }    
    return 0;
}
