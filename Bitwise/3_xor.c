// Do XOR operation between 2 numbers without using XOR operator (a = 1101 , b = 1001)
#include<stdio.h>
#define SIZE 4
void binary(int n)
{
    for(int i=SIZE-1;i>=0;i--){
        printf("%d",(n>>i)&1);

    }
}
int xor(int a, int b){
    int res=0;
    int carry=1;
    while(a>0||b>0){
        int a_bit=a&1;
        int b_bit=b&1;
        if(a_bit!=b_bit){
            res|=carry;
        }
        a>>=1;
        b>>=1;
        carry<<=1;
    }
    return res;
}

int main(){
    int a = 0b1101;
    int b= 0b1001;
    printf("Binary representation a:  ");
    binary(a);
    printf("\nBinary representation b:  ");
    binary(b);
    int result=xor(a,b);
    printf("\n Binary representation result:  ");
    binary(result);

}