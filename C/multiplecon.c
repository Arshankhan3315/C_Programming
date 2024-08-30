#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(n>5){
        printf("the number is greater than 5");
    }
    else{
        printf("the number is not greater than 5");
    }
    return 0;
}
// logical operator
// take positive interger input and tell if it is three digit number or not
#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(n>99 && n<1000){           // && mean is and
        printf("it is a three digit number");
    }
    else{
        printf("this is not a tree digit number");
    }       
    return 0;
}
// take positve integer input and tell if it is divisible by 5 and 3
#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(n%5==0 && n%3==0){           // && mean is and
        printf("this is divisible by 5 and 3");
    }
    else{
        printf("this is not divisible by 5 and 3");
    }       
    return 0;
}
// take positve integer input and tell if it is divisible by 5 or 3
// we using or operator '||'
#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){           // && mean is and
        printf("this is divisible by 5 or 3");
    }
    else{
        printf("this is not divisible by 5 or 3");
    }       
    return 0;
}
// take a three positive interger input and print the greatest of them
#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter a 1st number");
    scanf("%d",&a);
    printf("enter a 2st number");
    scanf("%d",&b);
    printf("enter a 3st number");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is greatest",a);
    }
    if(b>a && b>c){
        printf("%d is greatest",b);
    }
    if(c>b && c>b){
        printf("%d is greatest",c);
    }
    return 0;

}

// take 3 number input and tell if they can be the side of a traingle
#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter a 1st number");
    scanf("%d",&a);
    printf("enter a 2st number");
    scanf("%d",&b);
    printf("enter a 3st number");
    scanf("%d",&c);
    if(a+b > c && b+c>a && c+a>b){
        printf("valid tringle");
    }
    else{
        printf("invalid tringle");
    }
    return 0;

}
// if the ages of ram,shyam and ajay are input through the keyword write a program to determine the youngest of the three
#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter a 1st number");
    scanf("%d",&a);
    printf("enter a 2st number");
    scanf("%d",&b);
    printf("enter a 3st number");
    scanf("%d",&c);
    if(a<b && a<c){
        printf("%d is youngest",a);
    }
    if(b<a && b<c){
        printf("%d is youngest",b);
    }
    if(c<b && c<b){
        printf("%d is youngest",c);
    }
    return 0;

}