#include<conio.h>
int main()
{
        int i,j,n,m,sum=0,a[20][20];
        printf("Enter number of rows and columns:");
        scanf("%d%d",&n,&m);
        for(i=0;i<=n-1;i++)
        {
            for(j=0;j<=m-1;j++)
            {
                printf("Enter a Value:");
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<=n-1;i++)
        {
            for(j=0;j<=m-1;j++)
            {
                sum=sum+a[i][j];
            }
        }
        printf("Sum of Elements=%d",sum);
        getch();
    return 0;
}
