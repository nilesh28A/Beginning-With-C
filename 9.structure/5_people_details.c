#include<stdio.h>
#include<string.h>

typedef struct address {
    int hopuseNo;
    int block;
    char city[100];
    char state[100];
}add;

void prindAdd (struct address add);

int main(){
    add A1[5];
    //input
    printf("enter address for person 1:");
    scanf("%d",&A1[0].hopuseNo);
    scanf("%d",&A1[0].block);
    scanf("%s",&A1[0].city);
    scanf("%s",&A1[0].state);

    printf("enter address for person 2:");
    scanf("%d",&A1[1].hopuseNo);
    scanf("%d",&A1[1].block);
    scanf("%s",&A1[1].city);
    scanf("%s",&A1[1].state);

    printf("enter address for person 3:");
    scanf("%d",&A1[2].hopuseNo);
    scanf("%d",&A1[2].block);
    scanf("%s",&A1[2].city);
    scanf("%s",&A1[2].state);

    printf("enter address for person 3:");
    scanf("%d",&A1[3].hopuseNo);
    scanf("%d",&A1[3].block);
    scanf("%s",&A1[3].city);
    scanf("%s",&A1[3].state);

    printf("enter address for person 4:");
    scanf("%d",&A1[4].hopuseNo);
    scanf("%d",&A1[4].block);
    scanf("%s",&A1[4].city);
    scanf("%s",&A1[4].state);

    // output using function

    prindAdd(A1[0]);
    prindAdd(A1[1]);
    prindAdd(A1[2]);
    prindAdd(A1[3]);
    prindAdd(A1[4]);

    return 0;
}

void prindAdd (struct address add){
    printf("Address is:%d,%d,%s,%s\n",add.hopuseNo,add.block,add.city,add.state);
}
