// Find whether the given number has odd parity(odd number of 1's) or even parity(even number of 1's)
#include<stdio.h>
int count_bits(int n){
    int count=0;
    while(n>0){
        if((n&1)==1){
            count++;
        }
        n>>=1;
    }
    return count;
}
int main(){
    int n=0b10110110;
    int count=count_bits(n);
    if(count%2==0){
        printf("no of set bits: %d even", count);
    }
    else{
        printf("no of set bits: %d  odd", count);
    }
    
    
    return 0;
}