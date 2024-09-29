#include<stdio.h>
int main()
{
    int a[7]= {1, 1, 2, 2, 2, 2, 3, 4};
    int i, ctr=0, ctr1=0, ctr2=0;

    for(i=0; i<7; i++)
    {
        if(a[i]==1)
        {
            ctr++;
        }
        else if(a[i]==2)
        {
            ctr1++;
        }
        else if(a[i]==3)
        {
            ctr2++;
        }
    }
    printf("1 occured %d times\n",ctr);
    printf("2 occured %d times\n",ctr1);
    printf("3 occured %d times\n",ctr2);
    return 0;
}
