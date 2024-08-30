// loops -> baar baar -> repetition 
// basic of loops in c
#include<stdio.h>
int main(){
    for(int i=1;i<=9;i++){
        printf("Arshan\n");

    }
    return 0;
}

#include<stdio.h>
int main(){
    for(int i=1;i<=9;i=i+1){
        printf("Arshan\n");

    }
    return 0;
}

#include<stdio.h>
int main(){
    for(int i=1;i<=10;i=i+2){
        printf("Arshan\n");

    }
    return 0;
}

#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=10;i=i+1){
        printf("Arshan\n");

    }
    printf("%d",i);
    return 0;
}

//ques-Print hello world 'n' times take 'n' as input form user
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n; i++){
        printf("hello world\n");
    }
    return 0;
}
//ques-2-Print number 1 To 1000 in differen line
#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){
        printf("%d ",i);
    }
    return 0;
}
// Print all the even number from 1 to 100
#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
    return 0;
}
// Print all the odd number from 1 to 100
#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){
        if(i%2!=0){
            printf("%d ",i);
        }
    }
    return 0;
}
//ques-5- Print the table of 19
int main(){
    for(int i=2;i<=20;i=i+2){
        printf("%d ",i);
    }
    return 0;
}

#include<stdio.h>
int main(){
    for(int i=19;i<=190;i=i+19){
        printf("%d ",i);
    }
    return 0;
}


// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter number : ");
//     scanf("%d",n);
//     for(int i=n;i<=n;i=i+n){
//         printf("%d ",i);
//     }
//     return 0;
// }
// wrong

//Ques-6- Display this AP - 1,3,5,7,9.. upto 'n' terms.
// a, a+d, a+2d... a+(n-1)d  a =is first term ,d=is common term 
#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i=i+2){
        printf("%d ",i);
    }
    return 0;
}
// Ques7- Display this AP - 4,7,10,13,16... upto 'n' terms.
#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=4;i<=3*n-1;i=i+3){
        printf("%d",i);
    }
    return 0;
}
// Ap without maps
#include<stdio.h>
int main(){
    int n;  // itni baar loop chalega
    printf("enter a number: ");
    scanf("%d",&n);
    // 4,7,10,13,16,19 ... upto n number of terms
    // we are going to use extera variable
    int a=4;
    for(int i=1;i<=n;i++){
        printf("%d",i);
        a=a+3;
    }
    return 0;
}

// Display this GP - 1,2,4,8,16,32,.. upto 'n' terms
#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    // 1,2,4,8,16,32....
    int a=1;
    for(int i=1;i<=n;i++){
        printf("%d",a);
        a=a*2;
    }
    return 0;
}
// Display this GP - 3,12,48,.. upto 'n' terms.
#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    // 3,12,48,..
    int a=3;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a*4;
    }
    return 0;
}
// Ques-Display this AP - 100,97,94,... upto all terms which are positive.
#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    // 100,97,94,...
    int a=100;
    for(int i=1;a>0;i++){
        printf("%d ",a);
        a=a-3;
    }
    return 0;
}
// Display this GP -100,50,25,... upto 'n' terms.



// Ques-- Write a program to check if a number is prime or not.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){  //i is a factor n
            a=1;
            break;
        }
    }
    if(n==1) printf("1 is not prime or not composite");
    else if(a==0) printf("Prime");
    else printf("our number is composite");
    return 0;
}
// WAP to print add number from 1 to 100.
#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){
        if(i%2!=0){  //i is a factor n
            printf("%d",i);
        }
    }
    return 0;
}


#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){
        if(i%2==0){  //i is a factor n
            continue;
        }
        printf("%d",i);
    }
    return 0;
}