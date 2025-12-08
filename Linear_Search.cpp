#include<iostream>
using namespace std;

int Linear_Search(int arr[],int size,int key)             //linear search function created
{   int i;
    for(i=0;i<size;i++)                                    //for loop to traverse the array
    {
        if(arr[i]==key)                                      //if condition to check if element in a index matches the key and give that index
        {   cout<<"key is on index:"<<i<<endl;
            return i;
        }
    }
    return -1;                                              //returned value -1 to symbolize that key not found in array index

}
int main()
{   int key; 
    int i;
    int size;
    cout<<"Enter size of the array:";                          //getting size of array to set range of i in for loop of linear search function
    cin>>size;

    {   int arr[size];
        cout<<"Enter elements of the array"<<endl;
    for(i=0;i<size;i++)
    {   cout<<":";
        cin>>arr[i];                                               //getting elements of an array
        
    }
    cout<<"Enter the key you want to search"<<endl<<":";
    cin>>key; 
    int Result_Index=Linear_Search(arr,size,key);
    if(Result_Index!=-1)
    {
       cout<<"The key found at index:"<<Result_Index<<endl;
    }
    else
    {
      cout<<"Key did not found at any index in array"<<endl;
    }
    return 0;
    }
}
    


