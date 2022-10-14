#include<stdio.h>
struct time calculate_time(struct time *,struct time *);
struct time
{
    int hours;
    int minutes;
    int second;
}t1,t2,t3;
int main()
{
    printf("                    WELCOME  TO  THE  TIME PERIOD  CALCUATOR");
    printf("\n Pls Enter time in 24 HRS format");
    printf("\n Enter Starting time (Hours,Minutes and Second): ");
    scanf("%d %d %d",&t1.hours, &t1.minutes, &t1.second);
    printf("\n Enter ending time (Hours,Minutes and Second): ");
    scanf("%d %d %d",&t2.hours, &t2.minutes, &t2.second);
    t3=calculate_time(&t1,&t2);
    printf(" The time difference is %d-%d-%d",t3.hours,t3.minutes,t3.second);
}struct time calculate_time(struct time *q,struct time *p)
{
    struct time t;
    t.second = p->second - q->second;
    if(p->second  < q->second)
    {
        t.second=60-(t.second*-1);
        p->minutes--;
    }
    t.minutes = p->minutes - q->minutes;
    if(p->minutes < q->minutes)
    {
        t.minutes = 60 - (t.minutes*-1);
        p->hours--;
    }
    t.hours = p->hours - q->hours;
    if(p->hours< q->hours)
    {
        t.hours = 24 - (t.hours*-1);
    }
    return t;
}
