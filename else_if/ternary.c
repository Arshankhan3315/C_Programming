#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(n%2==0){
        printf("even ")
    }
    else{
        printf("odd")
    }
    return 0;
}

// ternary operator
#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    n%2==0 ? printf("even ") : printf("odd");
    return 0;
}