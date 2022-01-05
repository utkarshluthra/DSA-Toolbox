// For a sorted vector arr.
int binarySearch(vector<int> arr, int l, int r, int x){
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

/*
l = left-most
r = right-most
x = element to search for

using recursion here.

NOTE: SORT ELEMENTS IN THE ARRAY BEFORE APPLYING.
*/