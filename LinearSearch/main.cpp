#include <iostream>

using namespace std;

struct Array{

    int A[10];
    int size;
    int length;


};

//Display the array
void Display(struct Array *arr)
{
    for(int i=0;i<arr->length;i++)
    {
        printf("%d\t",arr->A[i]);
    }
}

//Linear Search -> search the element and return its index
int LinearSearch(struct Array *arr,int n)
{
    for(int i=0;i<arr->length;i++)
    {
        if(n == arr->A[i])
        {
            return i;
        }

        return -1;
    }
}

int main()
{
    struct Array arr = {{2,3,4,5,6},10,5};

    cout << LinearSearch(&arr,8);


}
