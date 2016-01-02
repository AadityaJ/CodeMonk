#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	long long int a[n],i,neg=0,pos=0,np=1,pp=1;
    	for(i=0;i<n;i++)
    		cin>>a[i];
    	sort(a,a+n);
    	for(i=0;i<n;i++)
    	{
			if(a[i]<0)
			{			
				neg++;
				np=np*a[i];
			}
			else if(a[i]>0)
			{
				pos++;
				pp=pp*a[i];
			}
    	}
    	if(neg==0 && pos==0)
    	{
    		cout<<"0 0\n";
    		continue;
    	}
    	long long int minp,maxp=0;
    	if(neg==0)
    		minp=a[0];
    	else
    	{
    		if(neg%2==0)
    		{
    			minp=(np/a[neg-1])*pp;
    		}
    		else
    		{
    			minp=np*pp;
    		}
    	}
    	if(pos==0 && neg!=n && neg==1)
    		maxp=0;
    	else if(pos==0 && neg==n && neg==1)
    		maxp=a[0];
    	else
    	{
    		if(neg%2==0)
    		{
    			maxp=(np)*pp;
    		}
    		else
    		{
    			maxp=(np/a[neg-1])*pp;
    		}
    	}
    	cout<<maxp<<" "<<minp<<"\n";
    }
    return 0;
}
