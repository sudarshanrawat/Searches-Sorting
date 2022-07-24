#include<iostream>
using namespace std;
int main()
{
    int t,i,n,s,k,j,flag;
    cin>>t;
    for(i=0;i<t;i++)
    {
    cin>>n;
    int a[n];
    for(s=0;s<n;s++)
        cin>>a[s];
    cin>>k;
    j=0;
    flag=0;
    for(s=0;s<n;s++)
    {   j++;
        if(k==a[s])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"Present "<<j<<endl;
    else
        cout<<"Not Present "<<j<<endl;
    }
}
