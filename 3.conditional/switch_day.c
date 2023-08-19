#include<stdio.h>

int main()       
{
    int day;
    printf("enter day (1-7):");
    scanf("%d", &day);

    switch (day)
    {   // also u can use character 

        // m-monday,  t-tuesday.....
        case 1: printf("Monday");
        break;
        case 2: printf("Tuesday");
        break;
        case 3: printf("Wednesday");
        break;
        case 4: printf("Thursday");
        break;
        case 5: printf("Friday");
        break;
        case 6: printf("Saturday");
        break;
        case 7: printf("Sunday");
        break;
        default: printf("noy a valid day");
    }
        // case can be any order
        // nested switch allowed
    return 0;
}
