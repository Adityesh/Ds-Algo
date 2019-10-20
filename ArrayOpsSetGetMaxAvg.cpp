/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void Display(int arr[]){
    for(int i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
}

int get(int arr[],int index){
    return arr[index];
}

void set(int arr[],int index,int number){
    arr[index] = number;
}

int max(int arr[]){
    int max = arr[0];
    
    for(int i=1;i<10;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    
    return max;
}

int min(int arr[]){
    int min = arr[0];
    
    for(int i=1;i<10;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int sum(int arr[]){
    int sum = 0;
    
    for(int i=0;i<10;i++){
        sum+=arr[i];
    }
    return sum;
}

int avg(int arr[]){
    return sum(arr)/10;
}


int main(){
    
    int arr[10] = {12,34,56,6,8,35,89,67,20,11};
    
    set(arr,4,10);
    Display(arr);
    
    return 0;
}
