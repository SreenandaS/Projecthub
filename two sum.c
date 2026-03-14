#include<stdio.h>
#include<stdlib.h>
void ntarget(int nums[],int target,int n)
{
    int i,j;
     for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(nums[i]==nums[j])
                continue;
                if(nums[i]+nums[j]==target)
                printf("[%d,%d]",nums[i],nums[j]);
                break;
                

            }
            if(i==n)
            printf("no such pair exists");
        
        }
}
int main()
{
    int n,nums[10000],i,target;
    printf("enter size of array");
    scanf("%d",&n);
    if(n>2)
    {
        printf("enter array elements\n");
       for(i=0;i<n;i++)
       scanf("%d",&nums[i]);
       printf("enter target:\n");
       scanf("%d",&target);
      ntarget(nums,target,n);
    }
    return 0;
