// 004-Given an array which consists of only 0, 1, and 2, sort the array without using any sorting algorithm

#include <bits/stdc++.h>
using namespace std;

/*
APPROACH:
The array is divided into four sections:
1. a[1...Lo-1] zeroes
2. a[Lo...Mid-1] ones
3. a[Mid...Hi] unknown
4. a[Hi+1...N] twos

If the ith element is 0 then swap the element to the low range, thus shrinking the unknown range.
Similarly, if the element is 1 then keep it as it is but shrink the unknown range.
If th element is 2 then swap it with an element in high range.
*/

/*
ALGORITHM:

1. Keep three counter c0 to count 0s, c1 to count 1s and c2 to count 2s
2. Traverse through the array and increase the count of c0 if the element is 0,increase the count of c1 if the element is 1 and increase the count of c2 if the element is 2
3. Now again traverse the array and replace first c0 elements with 0, next c1 elements with 1 and next c2 elements with 2
*/

// Function to sort the input array, the array is assumed to have values in {0, 1, 2}
void sort012(int a[], int arr_size){
    int lo = 0;
    int hi = arr_size - 1;
    int mid = 0;

    // Iterate till all the elements are sorted
    while (mid <= hi) {
        switch (a[mid]) {
        case 0:
            swap(a[lo++], a[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(a[mid], a[hi--]);
            break;
        }
    }
}

int main()
{
    int n; cin>>n;
    int arr[n];
    for (int i = 0; i<n; i++){
        int ele; cin>>ele;
        arrr[i]=ele;
    }
    sort012(arr, n);

    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}


// Solution complexity = O(n)       