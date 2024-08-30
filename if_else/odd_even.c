#include<stdio.h>
// Ques- take positive input and tell if it is even or odd
// Ans-any number which is divisible by 2 is called even
int main(){
    int x;
    printf("enter a number : ");
    scanf("%d",&x);
    if(x%2==0){
        printf("even number");

    }
    if(x%2!=0){
        printf("odd number");
    }
    return 0;
}

//if _else
#include<stdio.h>
int main(){
    int x;
    printf("enter a number : ");
    scanf("%d",&x);
    if(x%2==0){
        printf("even number");
    }
    else{
        printf("odd number");
    }
    
    return 0;
}