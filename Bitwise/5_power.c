// Check if the number is a power of 2 using bitwise operations
#include<stdio.h>
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    if((n&(n-1))==0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
