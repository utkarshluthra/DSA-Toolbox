#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int duplicate = n;
    int total=0;
    while(n!=0){
        int a = n%10;
        total+=(a*a*a);
        n/=10;
    }

    if(total==duplicate){
        cout<<duplicate<<" is an Armstrong Number"<<endl;
    }
    else{
        cout<<duplicate<<" is not an Armstrong Number"<<endl;
    }
    return 0;
}