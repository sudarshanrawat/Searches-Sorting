#include<iostream>
using namespace std;
int main()
{
    int i,j,n,t,k,c,s,key;
    cin>>t;
    for(i=0;i<t;i++)
    {
        c=0;
        s=0;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
            cin>>a[j];
        for(j=1;j<n;j++)
        {
            k=j-1;
            key=a[j];
            while(k>=0 && a[k]>key)
            {   s++;
                a[k+1]=a[k];
                k=k-1;
            }
            a[k+1]=key;
        }
        c=s+n-1;
        cout<<"comparison: "<<s<<endl<<"shifts: "<<c<<endl;

    }
}
