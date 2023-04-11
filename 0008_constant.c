#include<stdio.h>
int main()


{
    int a = 6.00;
    int b = 7.00;
    const int c = 5.00;
    int d = 8.00;

    printf("This is the value of a : %d\n",a);

    a = b;
    printf("This is the value of modified a : %d\n",a);

    printf("This is the value of c : %d\n",c);

    //c = d;        This is not possible
    // printf("This is the value of modified a : %d\n",c);   This is not possible

    return 0;
}

