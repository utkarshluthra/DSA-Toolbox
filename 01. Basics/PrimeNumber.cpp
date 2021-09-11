// To check if given number is even or odd

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; cin>>n;
    int flag=0;
    if(n>1){
        for(int i=2; (i<=sqrt(n)+1); i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<n<<" is Prime"<<endl;
        }
        else{
            cout<<n<<" is not prime"<<endl;
        }
    }
    else{
        cout<<n<<" is Not Prime"<<endl;
    }

}