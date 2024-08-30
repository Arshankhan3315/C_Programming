#include<stdio.h>
int main(){
    printf("*****\n******\n*****");
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for (int i=1;i<=3;i++){  // number of line
        for(int i=1;i<=n;i++){ // number of star
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


#include<stdio.h>
int main(){
    int n;
    printf("Enter a number rows: ");
    scanf("%d",&n);
    int m;
    printf("Enter a number of columns : ");
    scanf("%d",&m);
    for (int i=1;i<=n;i++){  // number of line
        for(int i=1;i<=m;i++){ // number of star
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// Print the pattern 1234,1234,1234
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int i=1;i<=n;i++){
            printf("%d ",i);
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
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
// star tringle ulta
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int a=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
            printf("* ");
        }
        a--;
        printf("\n");
    }
    return 0;
}

// Number Tringle
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
// number tringle ulta
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

// odd number tringle
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    // n=4 --> 1357
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a=a+2;
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    // A B C D
    // A B C D
    // A B C D
    // A B C D
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            int d=a+64;
            char ch=(char)d;  //ch=(char)65
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    // A B C D
    // A B C D
    // A B C D
    // A B C D
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n;j++){
            int d=a+64;
            char ch=(char)d;  //ch=(char)65
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}

//Print the given pattern star plus
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==n/2+1 || i==n/2+1 ) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
// star cross
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j || i+j==n+1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
// Floyd's tringle
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
