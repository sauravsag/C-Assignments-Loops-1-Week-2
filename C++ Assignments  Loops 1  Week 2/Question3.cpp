#include <iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    cout<<"table of "<<x<<" : "<<endl;
    
    for (int i = 1; i <=10 ; i++)
   {
    cout<<x<<"*"<<i<<" = ";
    cout<<x*i<<endl;
   }
}