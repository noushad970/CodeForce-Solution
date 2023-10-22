#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a,b,c,d;
        a=int(s[0])-48;
        b=int(s[1])-48;
        c=int(s[2])-48;
        d=int(s[3])-48;
        int ans=4;
        
        if(a==0 && b==0 && c==0 && d==0)
        {
            cout<<"13"<<endl;
            continue;
        }
        if(a==0)
        {
            ans+=9;
        }
        else
        ans+=abs(a-1);
        if(a==0 && b==0)
        {
            ans+=0;
        }
        else if(a==0 || b==0)
        {
            if(a==0)
            ans+=10-b;
            else if(b==0)
            ans+=10-a;
        }
        else
        ans=abs(a-b)+ans;
        if(b==0 && c==0)
        {
            ans+=0;
        }
        else if(b==0 || c==0)
        {
            if(b==0)
            ans+=10-c;
            else if(c==0)
            ans+=10-b;
        }
        else
        ans=abs(c-b)+ans;
        if(d==0 && c==0)
        {
            ans+=0;
        }
        else if(c==0 || d==0)
        {
            if(c==0)
            ans+=10-d;
            else if(d==0)
            ans+=10-c;
        }
        else
        ans=abs(d-c)+ans;

        cout<<ans<<endl;
        
    }
}