#include<iostream>
using namespace std;
int c,s;
void swapval(int* i,int* j)
{
    int temp= *i;
    *i=*j;
    *j=temp;
    s++;
}
int arraypart(int a[],int l,int h)
{
    int pivot,i,j;
    i=l;
    j=h;
    pivot=a[l];
    do
    {
    do{i++;c++;}while(a[i]<=pivot);
    do{j--;c++;}while(a[j]>pivot);
    if(i<j){swapval(&a[i],&a[j]);}
    }while(i<j);
    swapval(&a[l],&a[j]);
    return j;
}
int randompart(int a[], int l, int h)
{
    int random = l + rand() % (h - l);
        swapval(&a[random], &a[l]);
    return arraypart(a, l, h);
}
void quicksort(int a[],int l,int h)
{
    int pivot;
    if(l<h)
    {
        pivot=randompart(a,l,h);
        quicksort(a,l,pivot);
        quicksort(a,pivot+1,h);
    }
}
int main()
{
    int l,t,i,j,flag,n;
    cin>>t;
    for(i=0;i<t;i++)
    {   c=0;
        s=0;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
            cin>>a[j];
        quicksort(a,0,n);
        for(j=0;j<n;j++)
            cout<<a[j]<<" ";
        cout<<endl<<"camparisons: "<<c;
        cout<<endl<<"swaps: "<<s<<endl;

    }
}
