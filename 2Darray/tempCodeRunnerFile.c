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
        for(int i=minr;i<=maxc;i++){
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