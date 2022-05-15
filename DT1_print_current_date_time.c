#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    time_t cur_time;
    cur_time = time(NULL);
    char* cur_time_string;
    cur_time_string = ctime(&cur_time);
    printf("Date and time = %s",cur_time_string);
}