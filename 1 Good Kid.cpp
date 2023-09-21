#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n];
    int zero=0;
    int one=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            swap(a[i],a[j]);
        }
    }
   
   int ans=1;
   for(int i=0;i<n;i++)
   {
    ans=ans*a[i];
   }
   cout<<ans<<endl;
}
}
