#include<stdio.h>
int main(){
    int arr[2] [2];
    arr[0] [0]=1;
    arr[0] [1]=2;
    arr[1] [0]=3;
    arr[1] [1]=4;
    return 0;
}

#include<stdio.h>
int main(){
    int arr[2] [2]={{1,2},{3,4}};
    for(int i=0;i<2;i++){
        for( int j=0;j<2;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main(){
    int arr[3] [3]={{1,2,3},{3,4,5},{4,5,6}};
    for(int i=0;i<3;i++){
        for( int j=0;j<3;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// input array
#include<stdio.h>
int main(){
    int arr[3] [3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    return 0;
}
// input
#include<stdio.h>
int main(){
    int r;
    printf("Enter a number of rows : ");
    scanf("%d",&r);
    int c;
    printf("Enter a number of columns : ");
    scanf("%d",&c);
    int arr[r] [c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// decresation
#include<stdio.h>
int main(){
    int arr[] [3]={{1,2,3},{4,5,6}};
    return 0;
}
// write a program to store roll number and marks obtained by 4 students side by side in a matrix.
#include<stdio.h>
int main(){

    return 0;
}
// write a program to store 10 at every index of 2d matrix with 5 rows and 5 columns.
#include<stdio.h>
int main(){
    int arr[5] [5];
    for(int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// Write a program to add two matrices.
#include<stdio.h>
int main(){
    int a[2][2]={1,2,3,4};
    int b[2][2]={5,6,7,8};
    int result[2][2];
    printf("\n");
    for(int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            result[i][j]=a[i][j] + b[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            printf("%d",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// sum of matrix
#include<stdio.h>
int main(){
    int r;
    printf("Enter a number of rows : ");
    scanf("%d",&r);
    int c;
    printf("Enter a number of columns : ");
    scanf("%d",&c);
    printf("Enter all the elements");
    int arr[r] [c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum +=arr[i][j];
        }
    }
    printf("The sum of the given matrix %d",sum);
    return 0;
}
//Given a matrix having 0-1 only,find the rows the maximum number of 1's.
#include<stdio.h>
int main(){
    int arr[3] [4]={{1,0,1,1},{0,1,0,1},{1,1,1,1}};
    int maxcount=0;
    int maxidx=-1;
    for(int i=0;i<3;i++){
        int count=0;
        for(int j=0;j<4;j++){
            if(arr[i] [j]==1) count++;
        }
        if(maxcount<count){
            maxcount=count;
            maxidx=i;
        }
        printf("\n");
    }
    printf("%d",maxcount);
    printf("\n");
    printf("%d",maxidx);
    return 0;
}
//Write a program to print the transpace of the matrix entered by the user.
#include<stdio.h>
int main(){
    int r;
    printf("Enter a number of rows : ");
    scanf("%d",&r);
    int c;
    printf("Enter a number of columns : ");
    scanf("%d",&c);
    printf("Enter all the elements");
    int arr[r] [c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // 1 2 3
    // 4 5 6
    printf("\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",arr[j][i]);
        }
    }
    printf("\n");
    return 0;
}
//Write a program to print the transpace of the matrix entered by the user and store in other matrix.
#include<stdio.h>
int main(){
    int r;
    printf("Enter a number of rows : ");
    scanf("%d",&r);
    int c;
    printf("Enter a number of columns : ");
    scanf("%d",&c);
    printf("Enter all the elements");
    int arr[r] [c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // 1 2 3
    // 4 5 6
    int brr[c] [r];
    printf("\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            // printf("%d ",arr[j][i]);
            brr[i][j]=arr[j][i];
        }
        printf("\n");
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// write a program to change the given n*n matrix to its transpose
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number of rows/columns : ");
    scanf("%d",&n);
    printf("Enter all the elements\n");
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int temp=arr[i] [j];
            arr[i] [j] =arr[i] [j];
            arr[j] [i] =temp;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr [i][j]);
        }
        printf("\n");
    }
    return 0;
}
// write a program to rotate a matrix 90 degree clockwise.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number of rows/columns : ");
    scanf("%d",&n);
    printf("Enter all the elements\n");
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int temp=arr[i] [j];
            arr[i] [j] =arr[i] [j];
            arr[j] [i] =temp;
        }
    }
    // rotate
    for(int i=0;i<n;i++){
        int j=0;
        int k=n-1;
        while(j<k){
            int temp=arr[i][j];
            arr[i][j]=arr[j][k];
            arr[i][k]=temp;
            j++;
            k--;
        }
    }
    printf("\n");
    //output
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr [i][j]);
        }
        printf("\n");
    }
    return 0;
}
// write a program to print multiplication of two matrices given by the user.
#include<stdio.h>
int main(){
    int m;
    printf("Enter a number of rows : ");
    scanf("%d",&m);
    int n;
    printf("Enter a number of columns : ");
    scanf("%d",&n);
    int a[m][n];
    printf("Enter all the elements 1st");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int p;
    printf("Enter a number of rows : ");
    scanf("%d",&p);
    int q;
    printf("Enter a number of columns : ");
    scanf("%d",&q);
    int b[p][q];
    printf("Enter all the elements");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(n!=p){
        printf("The matrix cannot be multiply");
    }
    else{
        int res[m] [q];
        for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            for(int k=0;k<n;k++){
                res[i][j] +=a[i][k] *b[k][j];
            }
        }
    }
    // 1 2 3
    // 4 5 6
    printf("\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
}
//
#include<stdio.h>
int main(){
    int a[3][2]={{1,2},{3,4},{5,6}};
    int b[2][4]={{1,2,3,4},{5,6,7,8}};
    int res[3] [4];
    // multiple
    int cr=2;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            res[i][j]=0;
            for(int k=0;k<cr;k++){
                res[i][j] +=a[i][k] *b[k][j];
            }
        }
    }
    // 1 2 3
    // 4 5 6
    printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// given n*m matrix 'a' print all elements of the matrix in spiral order.
#include<stdio.h>
int main(){
    int m;
    printf("Enter a number of rows : ");
    scanf("%d",&m);
    int n;
    printf("Enter a number of columns : ");
    scanf("%d",&n);
    int a[m][n];
    printf("Enter all the elements 1st");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    // wave print
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                printf("%d",a[i][j]);
            }
        }
    }
    else{
        for(int j=0;j<n;j++){
            printf("%d",a[i][j]);
        }
    }
    return 0;
}
//Given an sprial
#include<stdio.h>
int main(){
    int m;
    printf("Enter a number of rows : ");
    scanf("%d",&m);
    int n;
    printf("Enter a number of columns : ");
    scanf("%d",&n);
    int a[m][n];
    printf("Enter all the elements 1st");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    // spiral print
    printf("\n");
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    int tne=m*n;
    int count=0;
    while(count<tne){
        for(int j=minc;j<maxc;j++){
            printf("%d ",a[minr][j]);
        }
        minr++;
        for(int i=minr;i<=maxr;i++){
            printf("%d ",a[i][maxc]);
        }
        maxc--;
        for(int j=maxc;j>=minc;j--){
            printf("%d ",a[maxc][j])
        }
        maxr--;
        for(int i=maxr;i>=minr;i--){
            printf("%d ",a[i]);
        }
        minc++;
    }
    return 0;
}