#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(void)
{
   ll K,a,T;
   ll N=1;
   scanf("%lld",&T);
   for(int j=1;j<=T;j++)
   {
       scanf("%lld",&K);
       for(int i=1;i<=K;i++)
       {
           scanf("%lld",&a);
           if(K>1)
            N=N*a;
           else if(K==1)
            N=a*a;
       }
       printf("Case %d: %lld\n",j,N);
       N=1;
   }
   return 0;

}
