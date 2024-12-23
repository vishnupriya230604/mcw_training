// Toggle particular bit of a 16-bit number (a = 0011110001010111) , get the position of the bit that should be toggled from the user.
#include<stdio.h>
#define SIZE 16
void binary(int n){
    for(int i=SIZE-1;i>=0;i--){
        printf("%d",(n>>i)&1);
    }
}
int main(){
    int a= 0b0011110001010111;
    int pos;
    printf(" before toggle : ");
    binary(a);
    printf("\n enter the position to be toggled: ");
    scanf("%d", &pos);
    printf("\n after toggle : " );
    a^=(1<<pos);
    binary(a);
}