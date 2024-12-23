// Count the number of set bits in any 16-bit number that the user gives
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
    printf("no of set bits: %d\n ", count_bits(n));
    return 0;
}