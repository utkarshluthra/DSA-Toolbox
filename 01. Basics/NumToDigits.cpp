// To get individual digits of a number input by user.

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n){
        cout<<n%10<<endl;
        n/=10;
    }

    return 0;
}