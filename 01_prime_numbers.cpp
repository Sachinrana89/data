#include<iostream>
#include<cmath>
using namespace std;

bool isPrimenumber(int num)
{
    for(int i =1; i<sqrt(num); ++i)
    {
        if(num%2==0)
        return false;
    }
    return true;
}

int main()
{
    int n1,n2;
    cin>>n1>>n2;

    for(int i = n1; i<=n2; i++)
    {
        if(isPrimenumber(i))
        {
            cout<<i;
            cout<<endl;
        }   
    }
    return 0;
}