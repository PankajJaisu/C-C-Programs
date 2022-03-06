int main() {
    int a[100];
    int i,n,sum=0;
    int *p;
    printf("Enter a Number:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    p=a;
    for(i=0;i<n;i++)
    {
        sum=sum+*p;
        p++;
        
    }
    printf("Sum of elements=%d",sum);
    return 0;
}