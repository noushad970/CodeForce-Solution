#include<bits/stdc++.h>
using namespace std;
void sumofthree()
    {
        long long int n,x,y,z;
        int notvalid=0;
        cin>>n;
         x=1;
         y=2;
         z=n-x-y;
        
        for(int i=0;i<10;i++)
        {
            if(z==x || z==y)
            {
                notvalid++;
                break;
            }
           if(z%3==0 || y%3==0)
           {
            z--;
            y++;
           }
           if(z<0 || y>=n)
           {
            notvalid++;
            break;
           }
           if(y%3!=0 && z%3!=0)
           {
            break;
           }
            
        }
        if(n==1 || n==2 || n==3 || n==4 || n==5 || n==6 || n==9)
        {
            cout<<"NO"<<endl;
        }
        else
        {
        cout<<"YES"<<endl;
        cout<<x<<" "<<y<<" "<<z<<endl;
        }    
    }
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
      sumofthree();  
        
    }
    
}
