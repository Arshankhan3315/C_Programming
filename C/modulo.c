// reminder
#include<stdio.h>
int main(){
    int a= 42;
    int b=6;
    int r=a%b;
    printf("%d",r);
    return 0;   
}

//take integer as a input and print half of  the number
//take float input and print the fraction part of real number

//fraction
#include<stdio.h>
int main(){
    float x=5.7;
    int y=x;
    printf("%d\n",y);
    float z=x-y;
    printf("%f",z);
    return 0;
}

//half the number
#include<stdio.h>
int main(){
    int x;
    printf("please input a value ");
    scanf("%d",&x);
    float y=x/2.0;
    printf("%f",y);
    return 0;
}

//hierarchy
#include<stdio.h>
int main(){
    int i=2*3/4+4/4+8-2+5/8;
    printf("%d",i);
    return 0;
}

// predict output
#include<stdio.h>
int main(){
    int i=2,j=3,k,l;
    float a,b;
    k=i/j *j;
    l=j/i *i;
    a=i/j *j;
    b=j/i *j;
    printf("%d %d %f %f",k,l,a,b);
    return 0;
}