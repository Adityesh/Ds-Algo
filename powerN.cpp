#include <iostream>

using namespace std;

int pow(int number,int power)
{
    if(power == 1)
    {
        return number;
    }
    else{
        return number * pow(number,power-1);
    }

}

int main()
{
    cout << pow(4,4);
    return 0;
}
