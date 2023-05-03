#include <stdio.h>

struct test{
    int day;
    int month;
    int year;
} date1, date2;

int main(){
    printf("Enter first date");
    scanf("%d",&date1.day);
    scanf("%d",&date1.month);
    scanf("%d",&date1.year);

    printf("Enter second date");
    scanf("%d",&date2.day);
    scanf("%d",&date2.month);
    scanf("%d",&date2.year);

    if(date1.day==date2.day && date1.month==date2.month && date1.year == date2.year){
        printf("Equal");
    }

    else
     printf("Not equal");
}