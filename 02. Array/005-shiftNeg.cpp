
// 005-Move all the negative elements to one side of the array
#include <bits/stdc++.h>
using namespace std;

/*
APPROACH:
Using a two-pointer or two-variable approach where we take two variables like left and right which hold the 0 and N-1 indexes.

ALGORITHM:
1. Check if the left and right elements are negative then simply increment the left pointer
2. Otherwise, if the left element is positive and the right element is negative then simply swap the elements, and the simultaneously increment and decrement the left and right pointers.
3. Else if the left element is positive and the right element is also positive then simpley decrement the right pointer.
4. Repeat set 3 until the left pointer <= right pointer.
*/

// Function to shift all the negative elements on left side
void shiftneg(int arr[], int left, int right){
  // Loop to iterate over the array from left to the right
  while (left<=right){
    // Condition to check if the left and the right elements are negative
    if (arr[left] < 0 && arr[right] < 0){
      left+=1;
    }     
    // Condition to check if the left pointer element is positive and the right pointer is negative
    else if (arr[left]>0 && arr[right]<0){
      int temp=arr[left];
      arr[left]=arr[right];
      arr[right]=temp;
      left+=1;
      right-=1;
    }
     
    // Condition to check if both the elements are positive
    else if (arr[left]>0 && arr[right] >0){
      right-=1;
    }else{
      left += 1;
      right -= 1;
    }
  }
}

int main(){
    int n; cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        int ele; cin>>ele;
        arr[i]=ele;
    }

    shiftneg(arr, 0, n-1);

    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
// Solution complexity = O( )
            