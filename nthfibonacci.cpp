//This program Prints the nth fibonacci number 
//Mathematical Formula: fibo(n-1) + fib(n-2)
#include<iostream>
using namespace std;
int fibonacci(int n);
int main()
{
    //user tells which digit number he wants
    int n;
    cout<<"Which fibonacci digit you want to print?\n";
    cin>>n;

    cout<<fibonacci(n)<<" ";
}

//our function
int fibonacci(int n)
{
   if(n <= 1)
   {
    return n;
   }
    return fibonacci(n-1) + fibonacci(n-2);
}