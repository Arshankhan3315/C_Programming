// it is a funcation calling it self
#include<stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("%d",fact);
    return 0;
}
// recursion
#include<stdio.h>
int factorial(int n){
    if(n==1  || n==0) return 1;
    return n*factorial(n-1);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("%d",fact);
    return 0;
}
// Print n to 1
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Good morning");
    }
    return 0;
}

#include<stdio.h>
void greeting(int n){
    if(n==0) return ;
    printf("Good Moring\n");
    greeting(n-1);
    return;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    greeting(n);
    return 0;
}

#include<stdio.h>
void decreasing(int n){
    if(n==0) return ;
    printf("%d\n",n);
    decreasing(n-1);
    return;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}

//Print 1 to n increasing parameter
#include<stdio.h>
void inccreasing(int x,int n){
    if(x==n) return ;
    printf("%d\n",x);
    inccreasing(x+1,n);
    return;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    inccreasing(1,n);
    return 0;
}
// increasing aftercall
#include<stdio.h>
void increasing(int n){
    if(n==0) return ;
    inccreasing(n-1);
    printf("%d\n",n);
    return;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    inccreasing(n);
    return 0;
}

// decreasing increasing
#include<stdio.h>
void increasing(int n){
    if(n==0) return ;
    printf("%d\n",n);
    increasing(n-1);
    printf("%d\n",n);
    return;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    increasing(n);
    return 0;
}
// sumparameter
#include<stdio.h>
void sum(int n){
    int s=0;
    for(int i=1;i<=n;i++){
        s=s+i;
    }
    printf("%d",s);
    return;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum(n);
    return 0;
}

#include<stdio.h>
void sum(int n,int s){
    if(n==0){
       printf("%d",s);
       return;
    } 
    sum(n-1,s+n);
    return;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}


#include<stdio.h>
int sum(int n){
    if(n==1  || n==0) return 1;
    return n+sum(n-1);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int fact=sum(n);
    printf("%d",fact);
    return 0;
}
// make a funcation which calculate 'a' riesed to the power 'b' using recursion
#include<stdio.h>
int power(int a,int b){
    int x=1;
    for(int i=1;i<=b;i++){
        x=x*a;
    }
    return x;
}
int main(){
    int a;
    printf("Enter a Base: ");
    scanf("%d",&a);
    int b;
    printf("Enter a Power: ");
    scanf("%d",&b);
    int p= power(a,b);
    printf("%d",p);
    return 0;
}
//recusion
#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main(){
    int a;
    printf("Enter a Base: ");
    scanf("%d",&a);
    int b;
    printf("Enter a Power: ");
    scanf("%d",&b);
    int p= power(a,b);
    printf("%d",p);
    return 0;
}
// Write a funcation to calculate the nth term fibonacci number using recursion
#include<stdio.h>
int fibo(int n){
    if (n==1 || n==2) return 1;
    int ans1 =fibo(n-1);
    int ans2=fibo(n-2);
    int ans=ans1+ans2;
    return ans;
}
int main(){
    int n;
    printf("Enter a Base: ");
    scanf("%d",&n);
    int x=fibo(n);
    printf("%d",x);
    return 0;
}

#include<stdio.h>
int fibo(int n){
    if (n==1 || n==2) return 1;
    return fibo(n-1) +fibo(n-2);
}
int main(){
    int n;
    printf("Enter a Base: ");
    scanf("%d",&n);
    int x=fibo(n);
    printf("%d",x);
    return 0;
}
//stair path
#include<stdio.h>
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    int totalways=stair(n-1)+stair(n-2);
    return totalways;
}
int main(){
    int n;
    printf("Enter a Base: ");
    scanf("%d",&n);
    int ways=stair(n);
    printf("%d",ways);
    return 0;
}
//power funcation (algarithmic)
#include<stdio.h>
int powerlog(int a,int b){
    if(b==0) return 1;
    if(b==1) return a;
    int x =powerlog(a,b/2);
    if(b%2==0){
        return x*x;
    }
    else{
        return x * x * a;
    }
    return x*x;
}
int main(){
    int a;
    printf("Enter a Base: ");
    scanf("%d",&a);
    int b;
    printf("Enter a Power: ");
    scanf("%d",&b);
    int p= powerlog(a,b);
    printf("%d",p);
    return 0;
}
//Maze path
#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
    int rightways=0;
    int downways=0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){
        rightways += maze(cr,cc+1,er,ec);
    }
    if(cc==ec){
        downways += maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<<ec){
        rightways +=maze(cr,cc+1,er,ec);
        downways += maze(cc+1,cc,er,ec);
    }
    int totalways=rightways+downways;
    return totalways;
}
int main(){
    int n;
    printf("Enter no of rows of the maze: ");
    scanf("%d",&n);
    int m;
    printf("Enter no of columns of the maze: ");
    scanf("%d",&m);
    int noofways=maze(1,1,n,m);
    printf("%d",noofways);
    return 0;
}
// pre in post
#include<stdio.h>
void preinpost(int n){
    if (n==0) return;
    printf("Pre %d\n",n);
    preinpost(n-1);
    printf("In %d\n",n);
    preinpost(n-1);
    printf("In %d\n",n);
}
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    preinpost(n);
    return 0;
}
//zig-zag
#include<stdio.h>
void zigzag(int n){
    if (n==0) return;
    printf("%d ",n);
    zigzag(n-1);
    printf("%d ",n);
    zigzag(n-1);
    printf("%d ",n);
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    zigzag(n);
    return 0;
}
// Tower of Hanoi
#include<stdio.h>
void tower(int n,char s,char h,char d){
    if(n==0) return ;
    tower(n-1,s,d,h);
    printf("%c -> %c\n");
    tower(n-1,h,s,d);
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    tower(n,'A','B','C');
    return 0;
}