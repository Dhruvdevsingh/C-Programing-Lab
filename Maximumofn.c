#include<stdio.h>
void main()
{
    int n,i;
    float num,maximum;
    printf("Enter the no of element :");
    scanf("%d",&n);
    maximum=-99999999;
    for(i=0;i<n;++i)
    {
        printf("Enter the Number:");
        scanf("%f",&num);
        if(num>maximum)
        {
            maximum=num;
        }
    }
        printf("Maximum number is:%.2f\n",maximum);
    }
    
    