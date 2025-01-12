//formula for factorial : n*(n-1)*(n-2)*(n-3)...
//I have done the same using recursions
//Mathematically For code: n*(fact(n-1))
#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
    int n;
    cout<<"Enter a number to find its factorial: ";
    cin>>n;

    cout<<"Factorial of "<<n<<" : "<<factorial(n)<<" \n";

    return 0;
}
int factorial(int n)
{
    // factorial of 0 is 1
    if(n == 0)
    {
        return 1;
    }
    //starts from 1 and increments and multiplies until n
    return (n * factorial(n-1));
}