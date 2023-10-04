#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        int ans=0;
        while (true)
        {
            if(n/p>0 && n%p!=0)
            n=n%p;
            
            if(n%p==0)
            break;
            else if(n%p!=0)
            {
                ans+=n%p;
                n=n*2;
            }
            if(n<p){
                ans=-1;
            break;}
        }
        
       cout<<ans<<endl;
    }
    
}