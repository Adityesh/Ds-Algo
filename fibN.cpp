#include <iostream>

using namespace std;

int fib(int n)
{

    if(n == 0)
    {
        return 0;
    }
    else if(n ==1)
    {
        return 1;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}


int main(){


    int a=0,b=1,n;
    cout << "Enter the number: \n";
    cin >> n;
    int sum;
    for(int i=1;i<=n-1;i++){
        sum = a+b;
        a = b;
        b = sum;
    }


    cout << sum;

    return 0;
}


