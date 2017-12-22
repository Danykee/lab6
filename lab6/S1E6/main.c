#include <stdio.h>
#include <stdlib.h>

void split_time(long int total_sec, int *hr, int *min, int *sec){
 *hr = total_sec/3600;
int t = total_sec%3600;
*min = t/60;
*sec = t%60;
}
int main()
{
    int total_sec,hr,min,sec;
    scanf("%d",&total_sec);
    split_time(total_sec,&hr,&min,&sec);
    printf("%dore %dminute %dsecunde",hr,min,sec);
    return 0;
}
