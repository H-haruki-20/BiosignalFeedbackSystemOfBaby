#include<stdio.h>

int main(void){
    int a = 5;
    int b = 10;
    int c = a + b;
    printf("the addres of a is %p and b is %p\n",&a,&b);
    printf("the answer is %p\n",&c);
}