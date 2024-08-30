// given the length and breadth of a rectangle write a program to find whether the area of the rectangle is greater than its perimeter
#include<stdio.h>
int main(){
    int l;
    printf("enter a length : ");
    scanf("%d",&l);
    int b;
    printf("enter a breadth : ");
    scanf("%d",&b);
    int a=l*b;
    int p= 2*(l+b);
    if(a>p){
        printf("area is grether than parameter");
    }
    else{
        printf("area is not greaten than parameter");
    }
    return 0;
}