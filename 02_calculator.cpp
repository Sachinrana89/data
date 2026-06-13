#include<iostream>
using namespace std;

int main()
{
    cout<<"enter two numbers"<<endl;
    float n1, n2;
    cin>>n1>>n2;

    cout<<"enter a operator";
    char op;
    cin>>op;

    switch(op)
    {
    case '+':
    cout<<n1+n2<<endl;
    break;
    
    case '-':
    cout<<n1-n2<<endl;
    break;

    case '*':
    cout<<n2*n1<<endl;
    break;

    case '/':
    cout<<n1/n2<<endl;
    break;

    default:
    cout<<"enter a valid operator";
    break;
    }
    return 0;
}