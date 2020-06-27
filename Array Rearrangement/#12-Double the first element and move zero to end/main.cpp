#include <iostream>

using namespace std;

int main()
{
    int arr[100],n,num1=0;
    cout<<"\nEnter the size of the array :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter the "<<i+1<<"th member of the array :";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            if(arr[i]==arr[i+1])
            {
                arr[i]= 2*arr[i];
                arr[i+1]=0;
            }
        }
    }


    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[num1]=arr[i];
            num1++;
        }

    }
    while(num1<n)
    {
        arr[num1]=0;
        num1++;
    }


    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter the "<<i+1<<"th member of the array :";
        cout<<arr[i];
    }

    return 0;
}
