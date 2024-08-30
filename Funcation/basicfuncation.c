#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int b;
    printf("Enter a number : ");
    scanf("%d",&b);
    int sum=add(a,b);
    printf("%d",sum);
    return 0;
}
// square_root
#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int root=sqrt(a);
    printf("this squre root is : %d",root);
    return 0;
}
//power
#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int power=pow(2,6);
    printf("this squre root is : %d",pow);
    return 0;
}
//prototype
#include<stdio.h>
void fun(){
    printf("Hello");
    return;
}
int main(){
    fun();
    return 0;
}

//
#include<stdio.h>
int main(){
    void fun();
    fun();
    return 0;
}
void fun(){
    printf("Hello");
    return;
}

//Ques-Combination and permutation
#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    // int n;
    // printf("Enter a number");
    // scanf("%d",&n);
    // int r;
    // printf("Enter a number");
    // scanf("%d",&n);
    // int nfact=factorial(n);
    // int rfact=factorial(r);
    // int nrfact=factorial(n-r);
    // int ncr=nfact/(rfact*nrfact);
    // printf("%d",ncr);
    int a=factorial(4);
    printf("%d",a);
    return 0;
}
// Pascal tringle
#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n,int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
// Pascal tringle number
#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n,int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            int icj=combination(i,j);
            printf("%d",icj);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        int first=1;
        // printf("%d",first);
        for(int j=0;j<=i;j++){
            printf("%d",first);
            first=first*(i-j)/(j+1);        }
        printf("\n");
    }
    return 0;
}
// SWAP 2 numbers
#include<stdio.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int b;
    printf("Enter a number : ");
    scanf("%d",&b);
    int temp=0;
    temp=a;
    a=b;
    b=temp;
    printf("swap number %d %d",a,b);
    return 0;
}
// swap the number without using 3 variable
#include<stdio.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int b;
    printf("Enter a number : ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swap number %d %d",a,b);
    return 0;
}
//Pass by value
#include<stdio.h>
void swap(int a, int b){
    int temp=a;
    a=b;
    b=temp;
    return;
}
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int b;
    printf("Enter a number : ");
    scanf("%d",&b);
    printf("swap number %d %d",a,b);
    swap(a,b);
    return 0;
}
//pointers
#include<stdio.h>
int main(){
    int a=5;
    int* x=&a;  //pointer declear int*
    printf("%p",&a);  //%p se address print hota hai
    return 0;
}
//pointers
#include<stdio.h>
int main(){
    int a=5;
    int* x=&a;  //pointer declear int*
    printf("%d",*x);  //%p se address print hota hai
    return 0;
}
// swap two number pass by reference
#include<stdio.h>
void swap(int* x, int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int b;
    printf("Enter a number : ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("swap number %d %d",a,b);
    return 0;
}
//
#include<stdio.h>
int main(){
    int a=25;
    int* x=&a;  //int* -> int ka address store karta hai
    int** y=&x;  //int** -> int* ka address store karta hai
    printf("%p\n",&x);
    printf("%p\n",y);
    return 0;
}
//
#include<stdio.h>
int main(){
    int a=25;
    int* x=&a;  //int* -> int ka address store karta hai
    int** y=&x;  //int** -> int* ka address store karta hai
    printf("%d\n",*x);
    printf("%d\n",**y);
    return 0;
}
// write a funcation to compute the greatest common division of two given number
#include<stdio.h>
int min(int a, int b){
    if(a<b) return a;
    else return b;
}
int gcd(int a,int b){
    int hcf;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            hcf=i;  
        }
    }
    return hcf;
}
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int b;
    printf("Enter a number : ");
    scanf("%d",&b);
    int hcf=gcd(a,b);
    printf("The HCF/GCD of %d and %d is : %d",a,b,hcf);
    return 0;
}
