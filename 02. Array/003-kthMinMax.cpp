
// 003-Find the Kth max and min element in the array
#include <bits/stdc++.h>
using namespace std;

/*
APPROACH:
Sort the array and return the element at k-1 in sorted array.
*/

// Function to return k'th smallest element in a given array
int kthSmallest(int arr[], int n, int k){
    // Sort the given array
    sort(arr, arr + n);

    // Return k'th element in the sorted array
    return arr[k - 1];
}
int kthLargest(int arr[], int n; int k){
    sort(arr, arr + n);
    return arr[n-k-1]
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i =0; i<n; i++){
        int ele; cin>>n;
        arr[i]=ele;
    }
    int k; cin>>k;
    cout<<kthSmallest(arr, n, k);
    cout<<kthLargest(arr, n, k);

    return 0;
}

// Solution complexity = O(n) | Theta( log N )