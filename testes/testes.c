#include <stdio.h>

int main(){

    double a = 9000000000; // 9 bilhões
    printf("%.2f\n",a);

    int b = 10;
    float c = 10.5;

    float soma = c + b;

    printf("%.2f\n", soma);

    int num = 5;




    num = num + num%3;

    int mod;
    mod = num%3;

    printf("%d\n", mod);

    printf("%d",num);

    return 0;
}