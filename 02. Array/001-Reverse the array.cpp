
// 001-Reverse the array
#include <bits/stdc++.h>
using namespace std;

// Iterative C++ program to reverse an array
void reverseArray(int arr[], int a, int b){
	while (a < b){
		int temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
		a++;
		b--;
	}
}	

int main()
{
    int n;
    cout<<"Number of elements in array: ";
    cin>>n;
	int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


	reverseArray(arr, 0, n-1);


    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
	return 0;
}

//Write code here:
// Solution complexity = O(n)
            