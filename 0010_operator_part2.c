#include<stdio.h>
int main()
{
    int a = 20;
    printf("This is the value of a : %d\n",a);
    //Modification on the process
    a = a+5;
    printf("This is the modified value of a : %d\n\n",a);

    a = 20; //Again this become 20
    printf("This is the value of a : %d\n",a);
    //Modification on the process
    printf("This is the modified value of a : %d\n\n\n\n",a+=5);
    //But watch that both are different from each other but working method are same


    a = 20;
    printf("This is the value of a : %d\n",a);
    //Modification on the process
    a = a-5;
    printf("This is the modified value of a : %d\n\n",a);

    a = 20; //Again this become 20
    printf("This is the value of a : %d\n",a);
    //Modification on the process
    printf("This is the modified value of a : %d\n\n\n\n",a-=5);
    //But watch that both are different from each other but working method are same




    a = 20;
    printf("This is the value of a : %d\n",a);
    //Modification on the process
    a = a*5;
    printf("This is the modified value of a : %d\n\n",a);

    a = 20; //Again this become 20
    printf("This is the value of a : %d\n",a);
    //Modification on the process
    printf("This is the modified value of a : %d\n\n\n\n",a*=5);
    //But watch that both are different from each other but working method are same



    return 0;
}
