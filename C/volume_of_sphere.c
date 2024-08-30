#include<stdio.h>

int main()
{
    int r=5;
    float v=4*3.14*r*r*r/3;
    printf("the volume of %f",v);
    return 0;
}

#include<stdio.h>
int main()
{
    int r=5;
    float c=3.14*r*r;
    printf("area of circle %f",c);
    return 0;
}

// area of circle
#include<stdio.h>
int main(){
    float radius;
    printf("enter radius: ");
    scanf("%f",&radius);
    float pi=3.14;
    float area = pi * radius *radius;
    printf("the area of circle: %f",area);
    return 0;
}

#include<stdio.h>
int main(){
    float p,r,t,si;
    printf("enter p: ");
    scanf("%f",&p);
    printf("enter r: ");
    scanf("%f",&r);
    printf("enter t: ");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("simple interrest: %f",si);
    return 0;
}