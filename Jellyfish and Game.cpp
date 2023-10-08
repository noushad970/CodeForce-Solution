
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n1,n2,k;
        cin>>n1>>n2>>k;
        int a[n1],b[n2];
        for(int i=0;i<n1;i++)
        cin>>a[i];
        for(int i=0;i<n2;i++)
        cin>>b[i];
        int maxA=0,maxB=0,sum=0;
        
        for(int i=0;i<n1;i++)
        {   
            if(a[i]>maxA)
            maxA=a[i];
            
        }
        for(int i=0;i<n2;i++)
        {   
            if(b[i]>maxB)
            maxB=b[i];
            
        }
        //sorting
        int asize = sizeof(a) / sizeof(a[0]);
        sort(a, a + asize);
        int bsize = sizeof(b) / sizeof(b[0]);
        sort(b, b + bsize);
        for(int i=1;i<n1;i++)
        {
            sum+=a[i];
        }
        if(n1==1 && n2==1 && k%2==0 && a[0]<b[0])
        sum+=a[0];
        else if(n1==1 && n2==1 && k%2==0 && a[0]>b[0])
        sum+=a[0];
        else if(n1==1 && n2==1 && k%2==1 && a[0]>b[0])
        sum+=a[0];
        else if(n1==1 && n2==1 && k%2==1 && a[0]<b[0])
        sum+=b[0];
        else if(k%2==0)
        sum+=a[0];
        else if(k%2==1 && maxA>=maxB)
        sum+=maxA;
        else if(k%2==1 && maxB>maxA)
        sum+=maxB;
        else 
        sum+=a[0];



        cout<<sum<<endl;

        

    }
    
}