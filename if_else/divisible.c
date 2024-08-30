#include<stdio.h>
// take positive interger input and tell if it is divisible by 5 or not
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n%5==0){
        printf("number is even");
    }
    else{
        printf("number is  odd");
    }
    return 0;
}