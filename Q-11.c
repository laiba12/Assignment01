#include<stdio.h>
int main()
{
    int h,m;
    printf("Enter the time: ");
    scanf("%d : %d",&h,&m);
    printf(" \"%d:%d\" converted to \"%d Hours and %d Minutes\" ",h,m,h,m);
    return 0;

}