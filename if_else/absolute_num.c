// take integer input and print the absolute value of that integer
#include<stdio.h>
int main(){
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    if(x<0){
        x=x*(-1);
    }
    printf("the absauletere value is %d",x);
    return 0;
}

// if cost price and selling price of an item is input through th keyboard write a program to determine whether the seller has made profit he made or loss he incurred
#include<stdio.h>
int main(){
    int cp;
    printf("enter a cost price :");
    scanf("%d",&cp);
    int sp;
    printf("enter a cost price :");
    scanf("%d",&sp);
    if(sp>cp){
        printf("this is profit");
    }
    if(cp>sp){
        printf("this is loss");
    }
    if(cp==sp){
        printf("no profit no loss");
    }
    return 0;
}
