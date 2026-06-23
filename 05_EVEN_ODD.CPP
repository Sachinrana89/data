#include<iostream>
using namespace std;
void even_odd(int num)
{
    if((num%2)==0)
    cout<<num<<"   is even";
    else
    cout<<num<<"   is odd";
    return;
}

int main()
{
    int n;
    cin>>n;
    even_odd(n);
    return 0;
}