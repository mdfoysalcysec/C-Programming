#include<stdio.h>
int main()
{
    char a[100];
    int b;

    printf("Enter your name : ");
    fgets(a, sizeof(a), stdin);
    printf("Enter your age : ");
    scanf("%d",&b);

    printf("\nThis is your name : %s",a);
    printf("This is your age : %d",b);
    return 0;
}



