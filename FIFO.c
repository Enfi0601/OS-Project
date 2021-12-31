#include<stdio.h>
int main()
{
    int i,j,n,a[50],frame[10],no,k,avail,count=0;
    printf("ENTER THE NUMBER OF PAGES: \n");
    scanf("%d",&n);
    printf("\nENTER THE PAGE NUMBER: \n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    printf("\nENTER THE NUMBER OF FRAMES: ");
    scanf("%d",&no);
    for(i=0;i<no;i++)
            frame[i]= -1;
            j=0;
            printf("\nREFERENCE STRING\t    PAGE FRAMES\n");
    for(i=1;i<=n;i++)
    {
        printf("\t%d\t\t",a[i]);
        avail=0;
        for(k=0;k<no;k++)
        if(frame[k]==a[i])
        {
            avail=1;
            for(k=0;k<no;k++)
            {
                printf("%d\t",frame[k]);
            }
            printf("<-- Hit");
        }
        if (avail==0)
        {
            frame[j]=a[i];
            j=(j+1)%no;
            count++;
            for(k=0;k<no;k++)
            {
                printf("%d\t",frame[k]);
            }
            printf("*");
        }
        printf("\n");
    }
    printf("\nNo. of Page Fault = %d\n",count);
    printf("No. of Hits = %d\n",n-count);
    printf("Miss ratio = %d/%d = %d:%d",count,n,count,n);
    printf("\nHit ratio = %d/%d = %d:%d",n-count,n,n-count,n);
    return 0;
}
