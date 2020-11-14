#include <stdio.h>

int main()
{

int second;
scanf("%d",&second);
int hour=second/3600;
second=second-(hour*3600);
int minutes=second/60;
second=second-(minutes*60);
printf("%d:%d:%d\n", hour,minutes,second);

return 0;
}
