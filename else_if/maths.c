// ques- Given three points (x1,y1),(x2,y2) and (x3,y3), write a program to check if all the three points fall on one straight line 
// ques- Given a point (x,y), write a program to find out if it lies on the x-axis or at the origin ,viz.(0,0)
#include<stdio.h>
int main(){
    int x,y;
    printf("enter the coordinates : ");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("the points is origin");
    }
    else if(x==0){
        printf("lies on y-axis");
    }
    else if(y==0){
        printf("lies on x axis");
    }
    else{
        printf("the points does not lies on x ,y axis");
    }
    return 0;
}