//take positive interger input and tell if it is divisible by 5 and 3
#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(n%5==0){
        if(n%3==0){
            printf("this number is divisible by 5 and 3");
        }
        else{

        printf("this number is divisble");
        }
    }
    else{
        printf("this is number is not divisible");
    }
    return 0;
}
// take positive interger input and tell if it is divisible by 5 and 3 but not divisible by 15
#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){
        if(n%15!=0){
            printf("this number is divisible by 5 and 3");
        }
        else{
            printf("the number is not divisible");
        }
    }
    else{
        printf("the number is not divisible by 3 or 5");
    }
    return 0;
}
// one more but this is wrong
#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n%5==0 || n%3==0 && n%15!=0){
        printf("the number is divisible by 5 and 3 but not 15");
    }
    else{
        printf("the number is not divisible by 3 or 5");
    }
    return 0;
}
// one more but this is wrong
#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if((n%5==0 || n%3==0) && n%15!=0){
        printf("the number is divisible by 5 and 3 but not 15");
    }
    else{
        printf("the number is not matching requried condition");
    }
    return 0;
}
// take 3 positive interger input and print the greatest of them
#include<stdio.h>
int main(){
    int a;
    printf("this is 1st : ");
    scanf("%d",&a);
    int b;
    printf("this is 2st : ");
    scanf("%d",&b);
    int c;
    printf("this is 3st : ");
    scanf("%d",&c);
    if(a>b){  // bis out of race
        if(a>c)
        printf("%d is gretest",a);
        else // a<c   -> b<a<c
        printf("%d is grestest",c);
    }
    else{   
        if(b>c)  //b>a -> a ab sabse dada to nahi hai
        printf("%d is grestest",b);
        else  //c>b
        printf("%d is gretest",c);
    }
    return 0;
}
// if the ages of ram shyam and ajay are input through the keywords write a program to determine the youngest of the three
#include<stdio.h>
int main(){
    int a;
    printf("this is 1st : ");
    scanf("%d",&a);
    int b;
    printf("this is 2st : ");
    scanf("%d",&b);
    int c;
    printf("this is 3st : ");
    scanf("%d",&c);
    if(a<b){  // bis out of race
        if(a<c)
        printf("%d is yountest",a);
        else // a<c   -> b<a<c
        printf("%d is yountest",c);
    }
    else{   
        if(b<c)  //b>a -> a ab sabse dada to nahi hai
        printf("%d is youngest",b);
        else  //c>b
        printf("%d is yountest",c);
    }
    return 0;
}