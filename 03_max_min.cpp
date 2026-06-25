#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[10];
    int maxNo = INT_MIN;;
    int minNo = INT_MAX;

    for(int i = 1; i<n; i++)
    cin>>arr[i];

    for(int i = 1; i<n; i++)
    {
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);
    }
    cout<<maxNo<<" "<<minNo;
    return 0;
}