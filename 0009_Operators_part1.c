#include<stdio.h>
int main()
{
    int a = 100;
    int b = 5;
    int sum, sub, mul, div, mod;
    int incre1 = 10;
    int incre2 = 10;
    int decre1 = 10;
    int decre2 = 10;

    sum = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;
    mod = a%b;

    printf("Summation : %d\n",sum);
    printf("Subtraction : %d\n",sub);
    printf("Multiplication : %d\n",mul);
    printf("Division : %d\n",div);
    printf("Modulus : %d\n\n", mod);
    printf("Increment Type 1 : %d \n",incre1++);
    printf("Increment Type 2 : %d \n",++incre2);
    printf("Decrement Type 1 : %d \n",decre1--);
    printf("Decrement Type 2 : %d \n",--decre2);
    return 0;
}
