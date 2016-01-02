#include<iostream>
#include<iomanip>
using namespace std;
int x,y,n,w;
long  double p1,p2;
long double A[1001][1001];
int iter=0;
long double fun(int w,int n)
{
    iter++;
    cout<<"\t\n\t"<<w<<"  "<<n<<endl;
   	if(w>=0 && A[w][n]!=-2 )
   	{
   		    
   			return A[w][n];
	}
   
	   
	if(w<=0)
	{	
	return 1.0;
	}
	else if(n==0 && w>0)
	{
		A[w][n]=0;
	    return 0;
	}
	else
	{
		 long double z;
		// cout<<p1<<" "<<p2<<"\n";
		long double z1=p1*fun(w-x,n-1)+(1-p1)*fun(w,n-1);
		long double z2=p2*fun(w-y,n-1)+(1-p2)*fun(w,n-1);
		if(z1>z2)
		z=z1;
		else
		z=z2;
		A[w][n]=z;
		return z;
	}
   
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
        long double p11,p22;
		cin>>x>>y>>n>>w>>p11>>p22;
			for(int j=0;j<=w;j++)
			{
				for(int k=0;k<=n;k++ )
				{
					A[j][k]=-2;
				}
			}
	   p1=p11/100;
	   p2=p22/100;
		long double d1=fun(w,n)*100;
	   
		 cout<<std::fixed<<setprecision(6)<<d1<<"\n";
		cout<<iter;
	}
	return 0;
}