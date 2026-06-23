#include<iostream>
using namespace std;
void alphabet(char character)
{
    
        if(character>='a' && character<='b' || character>='A' && character<='Z')
        cout<<character<<"   is a alphabet";
        else
        cout<<"character not found";
    

}

int main()
{
    char ch;
    cin>>ch;
    alphabet(ch);
    return 0;
}