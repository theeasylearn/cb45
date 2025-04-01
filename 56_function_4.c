/* write a program to convert given hours, minutes and  seconds  into total seconds
    how to pass structure as function argument
*/
#include<stdio.h>
//define function 
struct mytime 
{
    int hour,minute,second;
};

//with return value with argument function 
struct mytime convert(int seconds)
{
    //seconds = 4000
    int hours,minutes;
    hours = seconds / 3600; // 1 
    seconds = seconds - (hours * 3600); //400
    minutes = seconds / 60; //6 
    seconds = seconds - (minutes * 60); //40
    //create structure type variable 
    struct mytime t1;
    t1.hour = hours;
    t1.minute = minutes;
    t1.second = seconds;
    return t1;
}
void main()
{
    int seconds;
    printf("Enter seconds");
    scanf("%d",&seconds);
    struct mytime t1;
    t1 = convert(seconds);
    printf("hours = %d minutes = %d seconds = %d",t1.hour,t1.minute,t1.second);
}