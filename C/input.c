#include<stdio.h>
int main(){
    int p,q;
    printf("enter value p and q");
    scanf("%d %d",&p,&q);
    printf("p=%d,q=%d",p,q);
    return 0;
}

//Take two integers input, a and b:a>b, and find the remainder when a is divided by b
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a value :");
    scanf("%d",&a);
    printf("enter a value :");
    scanf("%d",&b);
    int q=a/b;
    int r=a-b*q; //divisor *quotient + remainder=dividend
    printf("the remainder %d is divided by %d is :%d",a,b,r);
    return 0;
}


#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a value :");
    scanf("%d",&a);
    printf("enter a value :");
    scanf("%d",&b);
    // int q=a/b;
    // int r=a-b*q; //divisor *quotient + remainder=dividend
    // printf("the remainder %d is divided by %d is :%d",a,b,r);
    int r=a%b;
    printf("the remainder %d is divided by %d is :%d",a,b,r);
    return 0;
}
