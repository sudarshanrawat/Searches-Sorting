#include<iostream>
using namespace std;
int main()
{
    int i,j,n,t,k,c,s,temp,m;
    cin>>t;
    for(i=0;i<t;i++)
    {
        c=0;
        s=0;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
            cin>>a[j];
        for(j=0;j<n-1;j++)
        {   m=j;
            for(k=j+1;k<n;k++)
            {   s++;
                if(a[j]>a[k])
                   m=k;

            }
            temp=a[j];
            a[j]=a[m];
            a[m]=temp;
            c++;

        }
        cout<<"comparison: "<<s<<endl<<"swaps: "<<c<<endl;
        for(j=0;j<n;j++)
            cout<<a[j]<<" ";

    }
}
