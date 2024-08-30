#include<stdio.h>
int main(){
    int cp;
    printf("enter cost price : ");
    scanf("%d",&cp);
    int sp;
    printf("enter selling price : ");
    scanf("%d",&sp);
    if(sp>cp){
        printf("profit");
    }
    else if(cp>sp){
        printf("Loss");
    }
    else{
        printf("no profit no loss");
    }
    return 0;
}