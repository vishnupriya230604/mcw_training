// Check whether the binary representation of any integer in a palindrome or not
#include<stdio.h>
int reverse(int n){
    int reversed=0;
    while(n>0){
        reversed=(reversed<<1)|(n&1);
        n>>=1;
    }
    return reversed;
}
void checkpalindrome(int n){
    if(n==reverse(n)){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}
int main(){
    int a = 0b00011000;
    int b= 0b10111001;
    checkpalindrome(a);
    checkpalindrome(b);
}