#include<stdio.h>
#include<string.h>

typedef struct account {
    int accNo;
    char name[100];
}acc;

void details(acc a);

int main(){
    acc a[3];

    printf("enter account deatils 1:");
    scanf("%d",&a[0].accNo);
    scanf("%s",&a[0].name);

    printf("enter account deatils 2:");
    scanf("%d",&a[1].accNo);
    scanf("%s",&a[1].name);

    printf("enter account deatils 3:");
    scanf("%d",&a[2].accNo);
    scanf("%s",&a[2].name);

    details(a[0]);
    details(a[1]);
    details(a[2]);

    return 0;
}

void details(acc a){
    printf("acc no = %d\n",a.accNo);
    printf("name is = %s\n",a.name);
}