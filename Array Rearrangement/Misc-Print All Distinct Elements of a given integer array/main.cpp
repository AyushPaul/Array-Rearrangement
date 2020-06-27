#include <iostream>

using namespace std;

void Selection_Sort(int arr[],int n)
{
    int i, j, min_idx,temp;

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
    }
}

void Find_Distinct_Elements(int arr[],int n)
{
    cout<<"\nDistinct Element :"<<arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            cout<<"\nDistinct Element :"<<arr[i];
        }
    }

}

int main()
{
    int arr[100],n;
    cout<<"\nEnter the size of the array :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter the "<<i+1<<"th member of the array :";
        cin>>arr[i];
    }
    Selection_Sort(arr,n);
    Find_Distinct_Elements(arr,n);

    return 0;
}


