#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]<35)
        {
            cout<<ar[i]<<endl;
        }
        if(ar[i]>35)
        {
        if(ar[i]%5<3)
        {
            cout<<ar[i]<<endl;
        }
        if(ar[i]%5==3)
        {
            cout<<(ar[i]+2)<<endl;
        }
        if(ar[i]%5==4)
        {
            cout<<(ar[i]+1)<<endl;
        }
        }
    }
}