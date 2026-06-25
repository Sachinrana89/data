#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int kid_max = INT_MIN;

    int candy[n];
    for(int i = 0; i<n; i++)
    cin>>candy[i];
    for(int j = 0; j<n; j++)
    kid_max = max(kid_max, candy[j]);
    cout<<"kid with highest no of candies "<<kid_max;
    cout<<endl;
    return 0;




}