#include<stdio.h>
int main()
    {
        int r;
        float a;
        printf("Enter the radius: ");
        scanf("%d",&r);
        a=3.1415*r*r;
        printf("Area of circle is %f having radius %d",a,r);
        return 0;
    }