// 1. Swap 2 numbers using bitwise operator (a=5, b=7) 
//     Output a= 7, b=5
#include<stdio.h>
void swap(int *a,int *b){
    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
}
int main(){
    int a=7,b=5;
    printf("before swapping, a=%d , b=%d", a,b);
    swap(&a,&b);
    printf("\nafter swapping, a=%d , b=%d", a, b);
}