#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int p1;
long long int p2;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        p1=0,p2=0;
        long long int n;
        cin>>n;
        long long int a[n],b[n];
        for(long long int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(long long int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        long long int min1=1000000000,min2=1000000000;
        for(long long int i=0;i<n;i++)
        {
            if(a[i]<min1)
            min1=a[i];
            if(b[i]<min2)
            min2=b[i];
        }
        
        // if(a[0]>b[0])
        // {
            for(long long int i=0;i<n;i++)
            {
                p1=p1+a[i];
                
            }
            for(long long int i=0;i<n;i++)
            {
                p2=p2+b[i];
               
            }
            p1=p1+n*min2;
            p2=p2+n*min1;
       
        if(p1<p2)
        cout<<p1<<endl;
        else
        cout<<p2<<endl;
        
    }
    
}