#include<iostream>
using namespace std;

void max(int num1, int num2, int num3)
{
    if(num1>num2 && num1>num3)
    cout<<num1<<" is greatest";
    else if(num2>num1 && num2>num3)
    cout<<num2<<" is greatest";
    else
    cout<<num3<<" is greatest";
    cout<<endl;
    
}

void min(int num1, int num2, int num3)
{
    if(num1<num2 && num1<num3)
    cout<<num1<<" is smallest";
    else if(num2<num1 && num2<num3)
    cout<<num2<<" is smallest";
    else
    cout<<num3<<" is smallest";
    cout<<endl;
}
int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;

    max(n1,n2,n3);
    min(n1,n2,n3);
   
}