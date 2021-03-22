#include<bits/stdc++.h>
typedef  long long int ll;

using namespace std;

void solve(){
	ll n;
	cin>>n;
	ll ar[n]={0};
	ll sum=0;
	
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
		
		
	}
	int flag=0,d=0;
	if(n>=2)
	{
		d=ar[1]-ar[0];
	}
	for(int i=0;i<n-1;i++)
	{
			
			if(ar[i+1]-ar[i]!=d)
			{
				flag=1;
				break;
			}

	}
	if(n==1||n==2||flag==0)
	{
		cout<<0<<endl;
	}
	else 
	{
		ll d=0,m=0;flag=0;
		

		for(int i=1;i<n-1;i++)
		{
			if(ar[i]<ar[i-1] && ar[i]<ar[i+1])
			{
				d=ar[i+1]-ar[i];
		        m=ar[i-1]+d-ar[i];
		        break;
			}
			else if(ar[i]>ar[i-1] && ar[i]>ar[i+1])
			{
				d=ar[i]-ar[i-1];
				m=ar[i]+d-ar[i+1];
				break;
			}
		}
		if(m!=0)
		for(int i=0;i<n-1;i++)
		{
			if(ar[i+1]!=(ar[i]+d)%m)
			{
				flag=1;
				
				break;
			}

		}
		if(ar[0]>=m)
		{
			flag=1;
		}
		if(flag==1 || m==0)
		{
			cout<<-1<<endl;
		}
		else
			cout<<m<<" "<<d<<endl;

	}
	
	

	
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
	
	cin>>t;
	while(t--)
	{
	    solve();
	}
}