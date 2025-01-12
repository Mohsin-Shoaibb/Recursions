//its the first program I wrote while learning recursions
//it counts days backword untill birthday and then says happy birthday
#include<iostream>
using namespace std;
void birthday(int n)
{
    if(n == 0)
    {
        cout<<"Happy Birthday, Grow up\n";
        return;
    }

    cout<<n<<" days left in Birthday!!\n";
    birthday(n-1);
}

int main()
{
    int n = 5;
    birthday(n);

    return 0;
}