#include<stdio.h>
main()
{
    int n,i,m,a[10],temp,j,sum,dif,x,y;
    printf("Enter the size of an array ");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array of elements = ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nM = ");
    scanf("%d",&m);

    printf("%d Maximum Number = %d",m,a[m]);
    x=a[m];
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nN = ");
    scanf("%d",&n);
    printf("%d Minimum Number = %d",n,a[n]);
    y=a[n];
    sum=x+y;
    dif=x-y;

    printf("\nSum = %d",sum);
    printf("\nDifference = %d",dif);


}