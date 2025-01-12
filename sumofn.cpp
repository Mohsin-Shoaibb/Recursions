//This program calculates sum of N posotive integers through recursions
// Formula: n + func(n-1); 
#include<iostream>
using namespace std;
int sum(int n);
int main()
{
    int n;
    cout<<"Enter a number to find Sum of N numers: ";
    cin>>n;
    cout<<"Sum of "<<n<<" numers : "<<sum(n)<<endl;

    return 0;
}
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    return (n + sum(n-1));
}