#include<stdio.h>
int main(){
    struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
    };
    struct pokemon pikachu;
    pikachu.attack=60;
    pikachu.hp=50;
    pikachu.speed=100;
    pikachu.tier='A';
    printf("%d",pikachu.attack);
    struct pokemon charizard;
    charizard.attack=130;
    charizard.hp=80;
    charizard.speed=80;
    charizard.tier='S';
    printf("%c",charizard.tier);
    return 0;
}

// input 
#include<stdio.h>
int main(){
    struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
    };
    struct pokemon pikachu;
    printf("Enter a attack value : ");
    scanf("%d",&pikachu.attack);
    // pikachu.attack=60;
    pikachu.hp=50;
    pikachu.speed=100;
    pikachu.tier='A';
    printf("%d",pikachu.attack);
    struct pokemon charizard;
    charizard.attack=130;
    charizard.hp=80;
    charizard.speed=80;
    charizard.tier='S';
    printf("%c",charizard.tier);
    return 0;
}
// create a structure type 'book' with name,price and number of page as its attributes
#include<stdio.h>
#include<string.h>
int main(){
    struct Book{
        char name[50];
        float price;
        int no_of_pages;
    }a,b,c;
    a.no_of_pages=100;
    a.price=411.5;
    strcpy(a.name,"Secreat Seven");

    b.no_of_pages=100;
    b.price=411.5;
    strcpy(b.name,"Fire");

    c.no_of_pages=100;
    c.price=411.5;
    strcpy(c.name,"RRR");

    printf("%d\n",a.no_of_pages);
    printf("%f\n",a.price);
    printf("%s\n",a.name);

    printf("%d\n",b.no_of_pages);
    printf("%f\n",b.price);
    printf("%s\n",b.name);

    printf("%d\n",c.no_of_pages);
    printf("%f\n",c.price);
    printf("%s\n",c.name);
    return 0;
}
// pokemon ---> Class
// pikachu----> object of class
// create a structure type 'person' with name salary and age its attributes.
#include<stdio.h>
#include<string.h>
int main(){
    struct Person{
        char name[50];
        float salary;
        int age;
    }person1 ,person2;

    person1.age=18;
    person1.salary=1800;
    strcpy(person1.name,"Ayan Khan");

    printf("%d\n",person1.age);
    printf("%f\n",person1.salary);
    printf("%s\n",person1.name);
    return 0;
}
// typedef
#include<stdio.h>
typedef float realnumber;
typedef int Integer;
int main(){
    Integer x=5;
    realnumber y=3.56;
    printf("%f",y);
    printf("%d",x);
    return 0;
}


#include<stdio.h>
#include<string.h>
int main(){
    typedef struct Book{
        char name[50];
        float price;
        int no_of_pages;
    } book;
    book a;
    book b;
    book c;
    a.no_of_pages=100;
    a.price=411.5;
    strcpy(a.name,"Secreat Seven");

    b.no_of_pages=100;
    b.price=411.5;
    strcpy(b.name,"Fire");

    c.no_of_pages=100;
    c.price=411.5;
    strcpy(c.name,"RRR");

    printf("%d\n",a.no_of_pages);
    printf("%f\n",a.price);
    printf("%s\n",a.name);

    printf("%d\n",b.no_of_pages);
    printf("%f\n",b.price);
    printf("%s\n",b.name);

    printf("%d\n",c.no_of_pages);
    printf("%f\n",c.price);
    printf("%s\n",c.name);
    return 0;
}
// multiple pointer problem
#include<stdio.h>
typedef int* pointer;
int main(){
    int x=5,y=7;
    pointer a=&x,b=&y;
    printf("%p\n",a);
    printf("%p",b);
    return 0;
}
//
#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;

    pokemon arr[3];
    arr[0].attack=50;
    arr[0].hp=100;
    arr[0].speed=30;
    arr[0].tier='A';
    strcpy(arr[0].name,"pikachu");

    arr[1].attack=150;
    arr[1].hp=10;
    arr[1].speed=310;
    arr[1].tier='C';
    strcpy(arr[1].name,"charizard");

    arr[2].attack=500;
    arr[2].hp=150;
    arr[2].speed=130;
    arr[2].tier='B';
    strcpy(arr[2].name,"Mewtwo");

    for(int i=0;i<3;i++){
        printf("%d\n",arr[i].attack);
        printf("%d\n",arr[i].hp);
        printf("%d\n",arr[i].speed);
        printf("%c\n",arr[i].tier);
        printf("%s\n",arr[i].name);
    }

    return 0;
}
// a record contains name of cricketer his age,number of test matches that he played and the average runs that he has scored in each test match.
#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char name[20];
        int age;
        int no_of_matchs;
        float avg_run;
    } cricketer;
    // 3 cricketers
    cricketer arr[3];
    for(int i=0;i<3;i++){
        scanf("%s",arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].no_of_matchs);
        scanf("%f",&arr[i].avg_run);
    }

    for(int i=0;i<3;i++){
        printf("Name :%s\n",arr[i].name);
        printf("Age :%d\n",arr[i].age);
        printf("No_of_matches : %d\n",arr[i].no_of_matchs);
        printf("Average_run : %f\n",arr[i].avg_run);
        printf("\n");
    }
    return 0;
}
// features of structer
#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    pokemon a,b,c;
    a.attack=100;
    a.hp=30;
    a.speed=390;
    a.tier='A';
    strcpy(a.name,"pikachu");

    // b.attack=a.attack;
    // b.hp=a.hp;
    // b.speed=a.name;
    // b.tier=a.speed;
    // strcpy(b.name,a.name);

    b=a;  // b me bhi a aa gaya
    b.attack=200;
    printf("%d",b.attack);
    return 0;
}
//date
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int date;
        int month;
        int year;
    }date ;
    date a,b;
    a.date=13;
    a.month=2;
    a.year=1996;

    b.date=19;
    b.month=1;
    b.year=2023;
    bool flag=true;
    if(a.date!=b.date) flag=false;
    if(a.month!=b.month) flag=false;
    if(a.year!=b.year) flag=false;

    if(flag==true) printf("the dates are same");
    else printf("the dates are different");
    return 0;
}
//features of structures
#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    typedef struct legendarypokemon{
        pokemon normal;
        char ability[10];
    } legendarypokemon;

    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"Pressure");
    mewtwo.normal.hp=150;
    mewtwo.normal.attack=180;
    strcpy(mewtwo.normal.name,"Mewtwo");
    mewtwo.normal.speed=180;
    mewtwo.normal.tier='S';
    return 0;
}
// funcation
// structure pass by value
#include<stdio.h>
#include<string.h>
typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
void fun(pokemon p){
    printf("%d",p.hp);
    return;
}
void change(pokemon p){
    p.hp=70;
    p.attack=60;
    p.speed=110;
}
int main(){
    pokemon pikachu;
    pikachu.hp=60;
    pikachu.attack=100;
    pikachu.speed=50;
    change(pikachu);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    //fun(pikachu);
    return 0;
}
//pointer structure
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
} pokemon;
int main(){
    pokemon pikachu;
    pikachu.hp=60;
    pikachu.attack=70;
    pikachu.speed=100;
    pikachu.tier='A';
    strcpy(pikachu.name,"pikachu");
    pokemon* x=&pikachu;
    printf("%p\n",&pikachu.hp);
    printf("%p\n",&pikachu.attack);
    printf("%p\n",&pikachu.speed);
    printf("%p\n",&pikachu.tier);
    printf("%p\n",&pikachu.name);

    printf("%p",x);
    return 0;
}
// create a person having attributes as age and weight access its structure variable using ponters.
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
} pokemon;
void change(pokemon p){
    (*p).hp=70;
    (*p).attack=70;
    (*p).speed=180;
    (*p).tier='S';
    strcpy((*p).name,"Raichu");
}
int main(){
    pokemon pikachu={60,70,100,'A',"Pikachu"};
    // pikachu.hp=60;
    // pikachu.attack=70;
    // pikachu.speed=100;
    // pikachu.tier='A';
    // strcpy(pikachu.name,"pikachu");
    pokemon* x=&pikachu;
    // printf("%p\n",&pikachu.hp);
    // printf("%p\n",&pikachu.attack);
    // printf("%p\n",&pikachu.speed);
    // printf("%p\n",&pikachu.tier);
    // printf("%p\n",&pikachu.name);
    // printf("%p",x);
    change(&pikachu);
    return 0;
}
// union
#include<stdio.h>
#include<string.h>
typedef union pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
} pokemon;
int main(){
    pokemon pikachu;
    pikachu.hp=60;
    pikachu.attack=70;
    pikachu.speed=100;
    pikachu.tier='A';
    strcpy(pikachu.name,"Pikachu");

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);
    return 0;
}

