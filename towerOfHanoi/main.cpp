#include <iostream>

using namespace std;
// n = towers a,b,c are the number assigned to the towers
void hanoi(int n,int a,int b,int c)
{
    //check if there are any towers left
    if(n>0)
    {
        hanoi(n-1,a,c,b);
        //actual instructions
        printf("Move from %d to %d\n",a,c);
        //---------------------------------
        hanoi(n-1,b,a,c);
    }
}

int main()
{
    //change the values here to test
    hanoi(1,1,2,3);
    //time complexity is 2^n
    return 0;
}
