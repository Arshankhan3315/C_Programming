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
        printf("%d is gretest",a);
        else // a<c   -> b<a<c
        printf("%d is grestest",c);
    }
    else{   
        if(b<c)  //b>a -> a ab sabse dada to nahi hai
        printf("%d is grestest",b);
        else  //c>b
        printf("%d is gretest",c);
    }
    return 0;
}