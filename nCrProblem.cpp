#include <iostream>

using namespace std;

int fact(int n)
{
    if(n <= 1){
        return 1;
    }
    else {
        return n * fact(n-1);
    }
}

int nCr(int n,int r){

    int num = fact(n);
    int denom = fact(r)* fact(n-r);

    return num/denom;

}



int main()
{
    cout << nCr(16,14);
    return 0;
}
