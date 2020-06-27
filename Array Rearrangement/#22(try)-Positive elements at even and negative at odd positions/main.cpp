#include <iostream>

using namespace std;

void Swap_Zeroes(int arr[],int n)
{
    int b[100];

    for(int i=0;i<n;i++)
    {
        b[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]!=0)
            {
                b[i]=arr[j];
                arr[j]=0;
                break;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        arr[i]=b[i];
    }

}

int main()
{
    int arr[100],n,b[100],num=0;
    cout<<"\nEnter the size of the array :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter the "<<i+1<<"th member of the array :";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
       b[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        if(i%2 == 0)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[j]>0)
                {
                    b[i]=arr[j];
                    arr[j]=0;
                    num++;
                    break;
                }
            }
        }
        else
        {
            for(int j=0;j<n;j++)
            {
                if(arr[j]<0)
                {
                    b[i]=arr[j];
                    arr[j]=0;
                    num++;
                    break;
                }
            }
        }
    }

    if(num<n)
    {
       Swap_Zeroes(b,n);
       for(int i=0;i<n;i++)
       {
           if(b[i]==0)
           {
               for(int j=0;j<n;j++)
               {
                   if(arr[j]!=0)
                   {
                       b[i]=arr[j];
                   }
               }
           }
       }
       for(int i=0;i<n;i++)
       {
        cout<<"\n The "<<i+1<<"th member of the array :";
        cout<<b[i];
       }

    }
    else
    {
      for(int i=0;i<n;i++)
       {
        cout<<"\n The "<<i+1<<"th member of the array :";
        cout<<b[i];
       }
    }

    return 0;






}
