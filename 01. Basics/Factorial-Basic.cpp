#include <bits/stdc++.h>>
using namespace std;
int factorial(int num){
    if (num<1){
        return 1;
    }
    return num*factorial(num-1);
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"The factorial of "<<num<<" is "<<factorial(num);
    return 0;
}