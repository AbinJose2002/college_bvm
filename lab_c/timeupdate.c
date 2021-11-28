#include<stdio.h>

struct time{
        int hour,min,sec;
        
    }s;

void update(struct time s1);

int main(){
    printf("Enter the time in hh:mm:ss format");
    scanf("%d%d%d",&s.hour,&s.min,&s.sec);
    update(s);
}

void update(struct time s1){
    printf("The old time is %d : %d : %d\n",s1.hour,s1.min,s1.sec);
    s1.sec++;
    if(s1.sec>60){
        s1.sec = 01;
        s1.min++;
        if(s1.min>60){
            s1.min=01;
            s1.hour++;
            if(s1.hour>12){
                s1.hour=1;
            }
        }
    }
    printf("The new time is %d : %d : %d",s1.hour,s1.min,s1.sec);
}