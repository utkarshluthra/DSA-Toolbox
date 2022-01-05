// 002-Find the maximum and minimum element in the array

#include<iostream>
using namespace std;

/*
APPROACH:
Divide the array into two parts and compare the maximums and minimums of the two parts to get the maximum and the minimum of the whole array.

We will be creating a struct to return multiple values (min and max)

Hence, the function declaration becomes struct pair getMinMax(int arr[], int n)
*/

struct Pair{
    int min;
    int max;
}; 

/*
ALGORITHM:
Pair MaxMin(array, array_size)
   if array_size = 1
      return element as both max and min
   else if arry_size = 2
      one comparison to determine max and min
      return that pair
   else (array_size  > 2) 
      recur for max and min of left half
      recur for max and min of right half
      one comparison determines true max of the two candidates
      one comparison determines true min of the two candidates
      return the pair of max and min
*/


// structure is used to return two values from minMax() 

struct Pair getMinMax(int arr[], int low, int high){
    struct Pair minmax, mml, mmr;     
    int mid;
    
    // If there is only one element 
    if (low == high)
    {
        minmax.max = arr[low];
        minmax.min = arr[low];     
        return minmax;
    } 
    
    // If there are two elements 
    if (high == low + 1)
    { 
        if (arr[low] > arr[high]) 
        {
            minmax.max = arr[low];
            minmax.min = arr[high];
        } 
        else
        {
            minmax.max = arr[high];
            minmax.min = arr[low];
        } 
        return minmax;
    }
    
    // If there are more than 2 elements 
    mid = (low + high) / 2; 
    mml = getMinMax(arr, low, mid);
    mmr = getMinMax(arr, mid + 1, high); 
    
    // Compare minimums of two parts
    if (mml.min < mmr.min)
        minmax.min = mml.min;
    else
        minmax.min = mmr.min;     
    
    // Compare maximums of two parts
    if (mml.max > mmr.max)
        minmax.max = mml.max;
    else
        minmax.max = mmr.max;     
    
    return minmax;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int arr_size = n;

    //Taking input of array
    for (int i = 0; i<n; i++){
        int ele; cin>>ele;
        arr[i]=ele;
    }


    struct Pair minmax = getMinMax(arr, 0, arr_size - 1);

    cout << "Minimum element is " << minmax.min << endl;
    cout << "Maximum element is " << minmax.max;
         
    return 0;
}
// Solution complexity = O(n)