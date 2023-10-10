#include <iostream>
using namespace std;
int main() {
    int n ,a;
    cout<<"number of term  = ";
    cin>>n;
    cout<<"enter 1st term = ";
    cin>>a;
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<" term of gp = "<<a<<endl;
        a = a*3;
    }
    
}