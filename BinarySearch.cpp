#include <iostream>
#include <cmath>

using namespace std;


//Iterative Binary Search
int BinarySearch(int arr[],int l,int h,int key)
{
    int mid;
    while(l<=h)
    {
        mid = floor((l+h)/2);

        if(key == arr[mid]){
            return mid;
        }
        else if(key < arr[mid])
        {
            h = mid-1;
        }
        else
            l = mid+1;
    }
    return -1;
}

//Recursive Binary Search
int RecurBinarySearch(int arr[],int l,int h,int key)
{
    int mid;
    if(l<=h)
    {
        mid = floor((l+h)/2);
        if(key == arr[mid])
        {
            return mid;
        }
        else if(key < arr[mid])
        {
            return RecurBinarySearch(arr,l,mid-1,key);
        }
        else
            return RecurBinarySearch(arr,mid+1,h,key);

    }
    return -1;
}

int main()
{
    int arr[11] = {2,3,4,5,6,23,26,29,45,67,69};

    cout <<RecurBinarySearch(arr,0,10,67);
    return 0;
}
