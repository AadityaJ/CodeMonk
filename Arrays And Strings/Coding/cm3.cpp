//https://www.hackerearth.com/code-monk-array-strings/algorithm/prateek-and-his-friends/
#include<stdio.h>
void subArraySum(int arr[], int n, int sum)
{
    int curr_sum, i, j;
 
    // Pick a starting point
    for (i = 0; i < n; i++)
    {
        curr_sum = arr[i];
 
        // try all subarrays starting with 'i'
        for (j = i+1; j <= n; j++)
        {
            if (curr_sum == sum)
            {
                printf ("YES");
            }
            if (curr_sum > sum || j == n)
                break;
           curr_sum = curr_sum + arr[j];
        }
    }
 
    printf("NO");
}
int main(int argc, char const *argv[])
{
    int t,n,sum;
    scanf("%d",&t);
    while(t--){
        int arr[100];
        scanf("%d%d",&n,&sum);
        scanf("%d",arr);
        
    }
    return 0;
}