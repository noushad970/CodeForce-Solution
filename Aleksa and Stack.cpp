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
        int x=1;
        for(int i=0;i<n;i++)
        {

            if(x%3==0)
            x++;
            if(x%2==0)
            x++;

            a[i]=x++;
        }
        
        
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    
}