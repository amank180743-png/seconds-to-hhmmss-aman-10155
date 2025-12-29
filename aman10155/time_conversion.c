#include<stdio.h>
int main(){
    int totalseconds;
    int hours, minutes, seconds;
    printf("enter total seconds : ");
    scanf("%d", &totalseconds );
    hours = totalseconds / 3600;
    minutes =( totalseconds % 3600)/60;
    seconds = totalseconds % 60 ;
    printf("formatted time : %02d:%02d:%02d\n",hours , minutes , seconds );
    return 0;
 
}