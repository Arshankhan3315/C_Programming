#include<stdio.h>
int main(){
    char arr[5]={'a','t','l','a','s'};
    printf("%c",arr[1]);
    printf("%p\n",arr[0]);
    printf("%p\n",arr[1]);
    printf("%p\n",arr[2]);
    printf("%p\n",arr[3]);
    return 0;
}
#include<stdio.h>
int main(){
    char ch='A';
    int x=(int)ch;
    printf("%d",x);
    return 0;
}
#include<stdio.h>
int main(){
    char ch='A';
    printf("%d",ch);
    return 0;
}
// null char
#include<stdio.h>
int main(){
    char ch='\0';
    printf("%c",ch);
    return 0;
}
#include<stdio.h>
int main(){
    char ch='\0';
    printf("%p",ch);
    return 0;
}
#include<stdio.h>
int main(){
    char arr[]={'h','e','l','l','o','\0'};
    int i=0;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}
#include<stdio.h>
int main(){
    char arr[]="hello";
    int i=0;
    while(i<5){
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}
#include<stdio.h>
int main(){
    char arr[]="My name is Arshan khan\0";
    int i=0;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}
#include<stdio.h>
int main(){
    char arr[]="My name is Arshan khan";
    int i=0;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}
//
#include<stdio.h>
int main(){
    char str[20]="Arshankhan";
    str[1]=98;
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    return 0;
}
#include<stdio.h>
int main(){
    char str[20]="Arshankhan";
    str[1]=98;
    int i=0;
    while(str[i]!='\0'){
        printf("%c",i[str]);
        i++;
    }
    return 0;
}
#include<stdio.h>
int main(){
    char str[20]="Arshankhan";
    str[1]=98;
    int i=0;
    while(str[i]!='\0'){
        printf("%c",*(str+i));
        i++;
    }
    return 0;
}
// input and output of string without loop
#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Arshankhan";
    printf("%s",str);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Arshankhan";
    // printf("%s",str);
    puts(str);
    return 0;
}
//
#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    scanf("%s",str);  // onely the first word will be consider
    printf("my name is%s",str);
    return 0;
}
//
#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    gets(str);
    printf("%s",str);
    return 0;
}
//
#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    scanf("%[^\n]s",str);
    printf("%s",str);
    return 0;
}
// reverse strings
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    puts("Enter strings");
    gets(str);
    // size
    int size=0;
    int k=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp =str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts("The reverse strings is ");
    puts(str);
    return 0;
}
// can we use strings as pointers
#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Colleage Wallah";
    char* ptr= &str[0];
    printf("%p",ptr);
    return 0;
}
//& address and pointers same
#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Colleage Wallah";
    // char* ptr= &str[0];
    printf("%p\n",&str[0]);   // we dont need &
    printf("%p",str);
    return 0;
}
//
#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Colleage Wallah";
    char* ptr= &str[0];
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    return 0;
}
//
#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Colleage Wallah";
    char* ptr= &str[0];
    int i=0;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
        i++;
    }
    return 0;
}
//
#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Colleage Wallah";
    char* ptr= str;
    printf("%s",str);
    return 0;
}
//
#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Colleage Wallah";
    // char* ptr= str;
    // ptr="Arshan khan";
    char* p=str;
    *p='P';
    printf("%s",str);
    return 0;
}
// copy a string
#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="Colleage Wallah";
    char* s2= s1;
    s1[0]='M';
    printf("%s",s2);
    return 0;
}
// deep copy a string
#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="Colleage Wallah";
    char s2[]="Physics Wallah";
    s2[0]='M';
    printf("%s\n",s1);
    printf("%s",s2);
    return 0;
}
// bultin funcation
#include<stdio.h>
#include<string.h>
int main(){
    char* str="Arshan";
    int x=strlen(str);
    printf("%d",x);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    char s1[12]="Arshan";
    char s2[12];
    strcpy(s2,s1);
    printf("%s",s2);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    char s1[12]="Arshan";
    char s2[12];
    strcpy(s2,s1);
    s2[0]='m';
    printf("%s",s2);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    char s1[6]="Arshan";
    char s2[6]="Khan";
    strcat(s1,s2);
    printf("%s",s1);
    return 0;
}
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