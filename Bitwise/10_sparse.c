#include<stdio.h>
#define Size 8
void binary(int n){
    for(int i =Size-1;i>=0;i--){
        printf("%d",(n>>i)&1);
    }
}

void isSparse(int n){
    if((n&(n<<1))>0){
        printf("no Sparse\n");
    }
    else{
        printf("Sparse");
    }
}
int main(){
    int n ;
    printf("enter the number: ");
    scanf("%d",&n);
    binary(n);
    isSparse(n);
    return 0;
}