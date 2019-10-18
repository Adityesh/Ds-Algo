#include <iostream>

using namespace std;

struct Array{

    int A[10];
    int size;
    int length;


};

//Display the array
void Display(struct Array arr)
{
    int i;
    printf("\nElements are \n");
    for(i=0;i<arr.length;i++)
    {
        printf("%d\t",arr.A[i]);
    }
}

//Push an element onto the end of an array
void push(struct Array *arr,int element)
{
    if(arr->length < arr->size)
    {
        arr->A[arr->length++] = element;
    }
}

//Insert an element at the given index
void Insert(struct Array *arr,int index,int element)
{
    if(index < arr->length){
        for(int i=arr->length;i>index;i--)
        {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = element;
        arr->length++;
    }
}

//Delete an element at the given index
void Delete(struct Array *arr,int index)
{
    if(index < arr->length){
        for(int i=index;i<arr->length;i++){
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
    }
}

int main()
{
    struct Array arr = {{2,3,4,5,6},10,5};

    Delete(&arr,2);
    Display(arr);

    return 0;

}
