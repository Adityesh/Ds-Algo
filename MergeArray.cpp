#include <iostream>

using namespace std;

struct Array {

int A[10];
int length;
int size;

};

void Display(struct Array arr){

    for(int i=0;i<arr.length;i++){
        printf("%d\t",arr.A[i]);
    }

}

struct Array* Merge(struct Array *arr1,struct Array *arr2){

    int i,j,k;
    i =j = k =0;
    struct Array *arr3 = new Array[10];

    while(i < arr1->length && j < arr2->length)
    {
        if(arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else{
            arr3->A[k++] = arr2->A[j++];
        }
    }

    for(;i<arr1->length;i++){
        arr3->A[k++] = arr1->A[i];
    }

    for(;j<arr2->length;j++){
        arr3->A[k++] = arr2->A[j];
    }

    arr3->length = arr1->length + arr2->length;

    return arr3;


}

int main()
{
    struct Array arr1 = {{2,5,6,10,25},5,10};
    struct Array arr2 = {{1,4,7,8,21},5,10};
    struct Array *arr3;

    arr3 = Merge(&arr1,&arr2);

    Display(*arr3);


}
