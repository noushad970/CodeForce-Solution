#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(k==a[i])
            ans++;
        }
        if(ans>0)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}