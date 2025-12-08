#include<iostream>
using namespace std;
int Binary_Search(int arr[],int n,int key)
{
    int start,mid,end;
    start=0;
    end=n-1;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key)
        {
            cout<<"key Found in index:"<<mid<<endl;
            break;
        }
        
        else
        {
            if(key>arr[mid])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
         
        }
       
           
    }
    if(arr[mid]==key)
    {
        return mid;
    }
    return -1;
}
int main()
{
    int i,n,key;
    cout<<"Enter number of elements in array"<<endl<<":";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for (i=0;i<n;i++)
    {
        cout<<":";
        cin>>arr[i];

    }
    cout<<"Enter the key you want to find in array"<<endl<<":";
    cin>>key;
    int Result_Index=Binary_Search(arr,n,key);
    if (Result_Index!=-1)
    {
        cout<<"Key found at :"<<Result_Index<<endl;
    }
    else 
    {
        cout<<"Key not found "<<endl;
    }
    return 0;
    
}
