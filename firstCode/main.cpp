#include <iostream>

using namespace std;

void pow(int n,int power){

if(power > 0){

    n = n*n;
    cout << n << endl;
    pow(n,power-1);

}


}

int main(){

    int x,y;
    cout << "Enter the number: ";
    cin >> x;

    cout << "Enter the power: ";
    cin >> y;

    pow(x,y);

    return 0;
}
