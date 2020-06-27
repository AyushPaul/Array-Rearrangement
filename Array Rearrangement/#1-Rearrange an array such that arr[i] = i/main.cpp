#include <iostream>

using namespace std;

int main()
{
    int a[100],n,temp;
    cout<<"\nEnter the size of the array :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter the "<<i+1<<"th member of the array :";
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]>5 && a[i]<0)
        {
            a[i]=-1;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i]==j)
                {
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<"\n The "<<i+1<<"th member of the array :";
        cout<<a[i];
    }
}
