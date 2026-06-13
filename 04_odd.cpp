#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i =0;
    for(i=0; i<=n; i++)
    {
        if(i%2==0)
        {
        continue;
        }
    cout<<i<<endl;
    }
   return 0; 
}
