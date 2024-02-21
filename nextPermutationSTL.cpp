#include <algorithm> 
#include <iostream>
using namespace std;
// std::next_permutation
// It is used to rearrange the elements in the range [first, last) into the next lexicographically greater permutation. A permutation is each one of the N! 
// possible arrangements the elements can take (where N is the number of elements in the range). Different permutations can be 
// ordered according to how they compare lexicographically to each other. The complexity of the code is O(n*n!) which also includes printing all the permutations.


// Syntax: 

// template 
// bool next_permutation (BidirectionalIterator first,
//                        BidirectionalIterator last);
// Parameters: 
// first, last : Bidirectional iterators to the initial
// and final positions of the sequence. The range 
// used is [first, last), which contains all the elements 
// between first and last, including the element pointed 
// by first but not the element pointed by last.

// return value: 
// true : if the function could rearrange 
// the object as a lexicographically greater permutation.
// Otherwise, the function returns false to indicate that 
// the arrangement is not greater than the previous, 
// but the lowest possible (sorted in ascending order).
 
int main(){
    int arr[] = { 6,1, 2, 3 };
 int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + n);
 
    cout << "The 3! possible permutations with 3 elements:\n";
    do {
        cout << arr[0] << " " << arr[1] << " " << arr[2] <<" " << arr[3]<< endl;
    } while (next_permutation(arr, arr + n));
 
    cout << "After loop: " << arr[0] << ' '
         << arr[1] << ' ' << arr[2]  << ' ' << arr[3]<< '\n';
 
    return 0;
}