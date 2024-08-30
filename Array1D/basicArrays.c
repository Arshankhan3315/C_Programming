#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    arr[4]=100;
    printf("%d",arr[4]);
    return 0;
}
// float
#include<stdio.h>
int main(){
    float a[5]={1,2,3,4,5};
    a[2]=100;
    printf("%d",a[4]);
    return 0;
}
//char
#include<stdio.h>
int main(){
    char arr[5]={'a','b','c','d','e'};
    printf("%c",arr[4]);
    return 0;
}
#include<stdio.h>
int main(){
    int arr[5];
    arr[0]=1;
    arr[1]=2;
    printf("%d",arr[1]);
    return 0;
}
#include<stdio.h>
int main(){
    int arr[3];
    printf("Enter a first element : ");
    scanf("%d",&arr[0]);
    printf("Enter a second element : ");
    scanf("%d",&arr[1]);
    printf("Enter a Third element : ");
    scanf("%d",&arr[2]);
    printf("%d",arr[2]);
    return 0;
}
//for loops
#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<=4;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
// inputs
#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d ",arr[1]);
    return 0;
}

#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        int a=i+1;
        printf("Enter a elements %d\n:",i);
        scanf("%d",&arr[i]);
    }
    printf("%d ",arr[1]);
    return 0;
}
#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("Enter a elements %d\n:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("%d ",arr[1]);
    return 0;
}

#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("\nEnter a elements %d\n:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
//reverse prints
#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("\nEnter a elements %d\n:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=4;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}
// Ques-Given an array of marks of students,if the mark of any student is less than 35 print its roll number.[roll number here refers to the index of the array.]
#include<stdio.h>
int main(){
    int Marks[10];
    for(int i=0;i<=10;i++){
        printf("Enter Marks %d\n",i);
        scanf("%d",&Marks[i]);
    }
    for(int i=0;i<10;i++){
        if(Marks[i]<35){
            printf("%d",i);
        }
    }
   return 0;
}
// inslization
#include<stdio.h>
int main(){
    int size=10,b[size];
    b[0]=2;
    printf("%d",b[0]);
    return 0;
}
//garbage value
#include<stdio.h>
int main(){
    int arr[4];
    printf("%d",arr[0]);
    return 0;
}
// Calculate the sum of all the elements in the given array.
#include<stdio.h>
int main(){
    int arr[5]={1,3,5,7,10};
    int sum=0;
    for(int i=0;i<=4;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
// user input size
#include<stdio.h>
int main(){
    int n;
    printf("Enter a size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        scanf("%d",arr[i]);
    }
    return 0;
}
//find the maximum value out of all the elements in the array.
#include<stdio.h>
int main(){
    int arr[7]={1,4,200,80,19,5,12};
    int max=-1;
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}

#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={1,4,200,80,19,5,12};
    int max= INT_MIN;
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}
// passing array to funcation
#include<stdio.h>
void fun(int arr[]){
    arr[0]=10;
    return;
}
int main(){
    int arr[5]={1,2,3,4,5};
    printf("%d\n",arr[0]);
    fun(arr);
    printf("%d\n",arr[0]);
    return 0;
}

#include<stdio.h>
void fun(int x[]){
    x[0]=109;
    return;
}
int main(){
    int arr[5]={1,2,3,4,5};
    printf("%d\n",arr[0]);
    fun(arr);
    printf("%d\n",arr[0]);
    return 0;
}
// swap array
#include<stdio.h>
void fun(int x[]){
    int temp=x[0];
    x[0]=x[1];
    x[1]=temp;
    return;
}
int main(){
    int arr[2]={2,9};
    printf("%d %d\n",arr[0],arr[1]);
    fun(arr);
    printf("%d %d\n",arr[0],arr[1]);
    return 0;
}

// given an array of integers change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.
#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    for(int i=0;i<=6;i++){
        if(i%2!=0){
            arr[i]=arr[i]*2;
        }
        else{
            arr[i]+=10;
        }
    }
    for(int i=0;i<=6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
//ques-Count the number of elements in given array greater than a given number x.
#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int count=0;
    for(int i=0;i<=6;i++){
        if(arr[i]>arr[i]) count++;
    }
    for(int i=0;i<=6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
// Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int sumEven=0;
    int sumOdd=0;
    for(int i=0;i<=6;i++){
        if(i%2==0){
            sumEven+=arr[i];
        }
        else{
            sumOdd+=arr[i];
        }
    }
    printf("%d",sumEven-sumOdd);
    return 0;
}
// find the total number of pairs in the array whose sum is equal to the given value x.
#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int totalpairs=0;
    int x=12;
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            if(arr[i]+arr[j]==x){
                totalpairs++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("%d",totalpairs);
    return 0;
}
//count the number of triplets whose sum is equal to the given value x.
#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int totaltriplets=0;
    int x=12;
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            for(int k=j+1;k<=7;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    totaltriplets++;
                    printf("(%d,%d)\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("%d",totaltriplets);
    return 0;
}
// Find the given largerst element in the given array
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=7;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<=7;i++){
        if(arr[i]!=max && smax<arr[i] ){
            smax=arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}


#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=7;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i]){
            smax=arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}

#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=7;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i] && max!=arr[i]){
            smax=arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}
// Write a program to copy the contents of one array into another in the reverse order.
#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int brr[7];
    for(int i=0;i<=6;i++){
        brr[i]=arr[6-i];
    }
    for(int i=0;i<=6;i++){
        printf("%d ",brr[i]);
    }
    return 0;
}

// write a program to reverse the array without using any extra array.
#include<stdio.h>
void reverse(int arr[]){
    int i=0;
    int j=6;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    return;
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    reverse(arr);
    for(int i=0;i<=6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
// rotate the given array 'a' by k steps where k is non-negative
#include<stdio.h>
void reverse(int arr[],int si,int ei){
    for(int i=si;j=ei;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int n=7;
    int k=3;
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<=6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
//given an array containing elements from 1 to 100 except one element in this range is missing. find the messing elements.
#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int x=4;
    for(int i=0;i<=6;i++){
        if(arr[i]==x){
            printf("%d is presint in the array and its index is %d ",x,i);
            break;
        }
    }
    return 0;
}
// ulta
#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int x=4;
    int check=0;
    for(int i=6;i>=0;i++){
        if(arr[i]==x){
            check=1;
            break;
        }
    }
    if(check==0){
        printf("%d is not presint in the array ",x);
    }
    else{
        printf("%d is presint in the array",x);
    }
    return 0;
}
// boolean
#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int x=4;
    bool flag=false;
    for(int i=6;i>=0;i++){
        if(arr[i]==x){
            flag=true;
            break;
        }
    }
    if(flag==false){
        printf("%d is not presint in the array ",x);
    }
    else{
        printf("%d is presint in the array",x);
    }
    return 0;
}
// write a program to find a duplicate elements from a given array of integers.
#include<stdio.h>
int main(){
    int arr[7]={1,2,7,4,5,6,7};
    for(int i=0;i<=6;i++){
        for(int j=i+1;j<=6;j++){
            printf("%d is a duplicated elements",arr[i]);
            break;
        }
    }
    return 0;
}
//find the given number in a given array where all the elements are being repeated twice with one value being unique
#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={1,3,2,4,1,2,3};
    for(int i=0;i<=6;i++){
        bool flag=false;
        for(int j=i+1;j<=6;j++){
            if(arr[i]==arr[j]){
                flag=true;
                i++;
                j=i+1;
            }
        }
        if(flag==false){
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}