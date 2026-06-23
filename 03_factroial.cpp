#include<iostream>
using namespace std;
int fact(int num)
{
    int factroial=1;
    for(int i =2; i<=num; i++)
    {
        factroial*=i;
    }
    return factroial;
}

int main()
{
    int n;
    cin>>n;
    int ans = fact(n);
    cout<<ans<<endl;
    return 0;
}