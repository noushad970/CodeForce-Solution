#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,n;
        cin>>x>>y>>n;
        long long int a[n];
        for(long long int i=0;i<n;i++)
        cin>>a[i];
        long long int ans=y;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]>=x)
            ans+=x-1;
            else
            ans+=a[i];
        }    
        cout<<ans<<endl;
    
    }
    
}