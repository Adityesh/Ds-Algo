#include <iostream>

using namespace std;

int F[10];

int fibM(int n){

    if(n<=1)
    {
        F[n] = n;
        return n;
    }
    if(F[n-2] == -1)
    {
        F[n-2] = fibM(n-2);

    }
    if(F[n-1] == -1)
    {
        F[n-1] = fibM(n-1);
    }
    F[n] = F[n-2] + F[n-1];

    return F[n-1] + F[n-2];
}


int main()
{

    for(int i=0;i<=10;i++)
    {
        F[i] = -1;
    }


    cout << fibM(7);

    return 0;
}
