#include<stdio.h>
#define SIZE 8

void binary(long n)
{
    for(int i=SIZE-1;i>=0;i--){
        printf("%ld",(n>>i)&1);

    }
}
int main(){
   int a = 59;
   int reversed = 0;
   printf("\nBefore reversal a = %d, binary rep = ",a);
   binary(a);
   for(int i=0;i<SIZE;i++){
     int lsb = a & 1;
     reversed = reversed << 1;
     reversed = reversed | lsb;
     a = a>>1;
   }
   printf("\nAfter reversal a = %d, binary rep = ",reversed);
   binary(reversed);

}
