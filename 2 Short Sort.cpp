#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string a;
    cin>>a;
    if(a[0]=='a' && a[2]=='c')
    cout<<"YES"<<endl;
    else if(a[1]=='c' && a[2]=='b')
    cout<<"YES"<<endl;
    else if(a[0]=='b'&& a[1]=='a')
    cout<<"YES"<<endl;
    else if(a[0]=='c'&& a[2]=='a')
    cout<<"YES"<<endl;
    else if(a[0]=='b'&& a[2]=='c')
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    

  }
}
