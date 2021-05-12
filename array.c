#include<stdio.h>
int  main()
{
    int a[10],n,i;
    printf("enter the elements in the array :");
    scanf("%d",&n);
    printf("enter the array elements :");
    for( int i=0;i<n;i++)
    scanf("%d",&a[i]);
    //printing an array
    for(i=0;i<n;i++)
    printf("entered elements:%d",a[i]);

    return 0;
}