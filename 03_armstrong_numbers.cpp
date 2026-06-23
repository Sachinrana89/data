#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int armstrong =0;
    int originalnumber =n;

    while(n>0)
    {
        int last_num = n%10;
        armstrong+= last_num*last_num*last_num;
        n= n/10;

    }
    if(originalnumber == armstrong)
    {
        cout<<"armstrong";
    }
    else
    cout<<"non armstrong";
return 0;
}