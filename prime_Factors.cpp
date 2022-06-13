//prime factors

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void primeFac(int n)
{
    if(n<=1)
        return;
    int temp=n;
    int x=2;
    while(temp%x==0)
    {
        cout<<x<<" ";
        temp=temp/x;
    }
    x=3;
    while(temp%x==0)
    {
        cout<<x<<" ";
        temp=temp/x;
    }
    x=5;
    while(temp>1)
    {
        while(temp%x==0)
        {
        cout<<x<<" ";
        temp=temp/x;
        }
        while(temp%(x+2)==0)
        {
            cout<<(x+2)<<" ";
            temp=temp/(x+2);
        }
        x+=6;
    }
}
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    primeFac(n);
    return 0;
}
