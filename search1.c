#include<stdio.h>
int main()
{
    int n,search,code=0;
    printf("Enter Size of an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter number to be search: ");
    scanf("%d",&search);
    for(int i=0;i<n;i++)
    {
        if(search==arr[i])
        {
            printf("Number Found!\n");
            printf("Position: %d",i+1);
            code++;
            break;
        }
        
    }
    if(code==0)
    {
        printf("Number not found!");
    }
}
