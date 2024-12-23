// 7.Count the number of leading zeros present in a 16-bit number
#include<stdio.h>
int count_leading_zeros(int n){
    int count=0;
    // int size=sizeof(n)*8;
    for(int i=8-1;i>=0;i--){
        if((n&(1<<i))==0){
            count++;
        }
        else{
            break;
        }
    }
    return count;
}
int main(){
    int n=0b00010101;
    printf("no of leading zeros: %d\n", count_leading_zeros(n));
    
    return 0;
}