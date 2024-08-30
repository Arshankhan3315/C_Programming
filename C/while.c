#include<stdio.h>
int main(){
    int i=1;
    while (i<101)
    {
        printf("%d",i);
        i++;
    }
    
    return 0;
}
// while loops garbeg value or random value
#include<stdio.h>
int main(){
    int j;
    printf("\n%d",j);
    while(j<=10){
        printf("\n%d",j);
        j=j+1;
    }
    return 0;
}

//post_pre
#include<stdio.h>
int main(){
    int x=5;
    printf("%d\n",x);
    x++;
    printf("%d",x);
    return 0;
}

//Pre
#include<stdio.h>
int main(){
    int x=5;
    printf("%d\n",x);
    printf("%d",++x);
    return 0;
}

//predict the output
#include<stdio.h>
int main(){
    int x=4,y,z;
    y=--x;
    z=x--;
    printf("\n%d %d %d",x,y,z);
}
//while loops
#include<stdio.h>
int main(){
    int i=10;
    while (i=20)
    {
        printf("\n A computer buff");
    }
    
    return 0;
}
//do while loop
#include<stdio.h>
int main(){
    int i=10;
//     while(i<10){
//         printf('hello');
//         i++;
//     }
//     return 0;
// }
do{
    printf("hello");
    i++;
} while (i<10);
return 0;}

//Question using operatires 
//ques- WAP to count digit of a given number
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("The number of digit are %d",count);
    return 0;
}
//Ques-WAP to print sum of all the even digits of a given number
//Ques- WAP to print reverse of a given number and store it.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int r=0;
    while(n>0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    printf("the reversed number is %d",r);
    return 0;
}
//ques- WAP to print the sum of given number and its reverse
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int r=0;
    while(n>0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    printf("the reversed number is %d",r);
    int sum=n+r;
    printf("\n %d",sum);
    return 0;
}
//Ques- Print the sum of this series: 1-2+3-4+5-6... upto n
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    // 1+2+3+4...+n terms
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("the sum is %d",sum);
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    //  1-2+3-4+5-6... upto n
    // odd --> add
    // even --> subtract
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0) sum=sum+i;
        else sum=sum-i;
    }
    printf("the sum is %d",sum);
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    //  1-2+3-4+5-6... upto n
    // odd --> add
    // even --> subtract
    int sum=0;
    for(int i=1;i<=n;i++){
        if(n%2==0){
            sum = -n/2;
        }
        else{
            sum = -n/2 +n;
        }
    }
    printf("the sum is %d",sum);
    return 0;
}
//Ques- Print the Factorial of a given number n;
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int product=1;
    for(int i=1;i<=n;i++){
        product=product*i;
    }
    printf("The factorial: %d",product);
    return 0;
}

//Ques- Print the Factorial of a given number n; another
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int product=1;
    for(int i=1;i<=n;i++){
        product=product*i;
        printf("The factorial of %d is: %d",i,product);
    }
    return 0;
}

//Print the nth fibonacci number,
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum=1;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("%d",sum);
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum=1;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("%d",sum);
    }
    return 0;
}

//power
#include<stdio.h>
int main(){
    int a,b;
    printf("enter a number base");
    scanf("%d",&a);
    printf("enter a number power: ");
    scanf("%d",&b);
    int power=1;
    for(int i=1;i<=b;i++){
        power=power* a;
    }
    printf("%d raised of power %d is %d",a,b,power);
    return 0;
}

//ascii
#include<stdio.h>
int main(){
    for(int i=65;i<=90;i++){
        char ch(char)i;
        printf("%c ",ch);
        printf("%d\n",i);
    }
    return 0;
}