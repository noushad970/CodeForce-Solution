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
        int b=0;
        int x[n],y[n];
        for(int i=0;i<n;i++)
        {
            cin>>x[i]>>y[i];
        }
        int a=x[0];
        for(int i=1;i<n;i++)
        {
            if(x[0]<=x[i])
            {
                if(y[0]<=y[i])
                b++;
            }
            
        }
         if(b>0)
         cout<<"-1"<<endl;
         else if(b==0)
         cout<<a<<endl;
        
    }
    
}