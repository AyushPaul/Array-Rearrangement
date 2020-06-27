#include <iostream>

using namespace std;

void Special_Sort(int arr[],int n,int a[])
{
    int i, j, min_idx,temp,temp1;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++) //in each run it checks n-1 elements and check which is lowest and gives its index number to a temporary variable which is then assigned to the ith member of the current running loop
        {
            if (arr[j] < arr[min_idx])
            min_idx = j;
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i]=temp;

        temp1=a[min_idx];
        a[min_idx]=a[i];
        a[i]=temp1;
    }
}

int main()
{
   int arr[100],n,a[100];
    cout<<"\nEnter the size of the array :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter the "<<i+1<<"th member of the 1st array :";
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter the "<<i+1<<"th member of the 2nd array :";
        cin>>a[i];
    }

    Special_Sort(arr,n,a);

    for(int i=0;i<n;i++)
    {
        cout<<"\n The "<<i+1<<"th member of the 2nd array :";
        cout<<a[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"\n The "<<i+1<<"th member of the 1st array :";
        cout<<arr[i];
    }

}
