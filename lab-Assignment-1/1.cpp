#include <iostream>
using namespace std;
void binarysearch(int arr[], int l, int r, int k) {
    if (l > r) {
        cout << "Not Found" << endl;
        return;
    }
    int m = (l + r) / 2;
    if (arr[m] == k) {
        cout << k << " Found at " << m << endl;
        return;
    }
    else if (k < arr[m]) {
        binarysearch(arr, l, m - 1, k);
    }
    else {
        binarysearch(arr, m + 1, r, k);
    }
}

int main()
{
    int arr[]={2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    binarysearch(arr,0,9,23);
    return 0;
}
