#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int mini=min(a,min(b,c));
        
        //cout<<min;
        int sum=a/mini+ b/mini+ c/mini; 
        // if(a==b && b==c)
        // cout<<"YES"<<endl;
        // else if(a==b && (pow(a,2)==c || pow(a,3)==c))
        // cout<<"YES"<<endl;
        // else if(a==c && (pow(c,2)==b || pow(c,3)==b))
        // cout<<"YES"<<endl;
        // else if(c==b && (pow(c,2)==a || pow(c,3)==a))
        // cout<<"YES"<<endl;
        // else if(a/mini<=3 && b/mini<=3 && c/mini<=3 && sum<=6 && a%mini==0 && b%mini==0 && c%mini==0 )
        // cout<<"YES"<<endl;
        if(a%mini==0 && b%mini==0 && c%mini==0 && sum>6)
        cout<<"NO"<<endl;
        else if(a%mini!=0 || b%mini!=0 || c%mini!=0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}
