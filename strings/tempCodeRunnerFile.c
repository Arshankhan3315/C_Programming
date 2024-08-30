// inserting a character in a string
#include<stdio.h>
#include<string.h>
int main(){
    char str[20]="College";
    // 2nd index pe 'l'
    for(int i=6;i>=2;i--){
        str[i+i]=str[i];
    }
    str[2]='K';
    printf("%s",str);
    return 0;
}