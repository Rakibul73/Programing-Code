#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(void)
{
    int TC,U,V,b,T,L,R,post=0;
    ll N,Q;
    long long int  arr[100000];
    scanf("%d",&TC);
    for(int i=1;i<=TC;i++)
    {
        scanf("%d %d",&N,&Q);
        for(int j=1;j<=Q;j++)
        {
           scanf("%d",&b);
           if(b==0)
            {
                scanf("%d %d",&U,&V);
                arr[U]=0;
                arr[V]=0;

            }
           if(b==1)
           {
               scanf("%d %d",&U,&T);
               arr[T]=T;
           }
           if(b==2)
           {
               scanf("%d %d %d",&U,&L,&R);
               if(arr[U]==0&&(arr[T]>=L&&arr[T]<=R))
               {

                   printf("%d\n",post);
                   post++;
               }

           }


        }
    }
    return 0;
}
