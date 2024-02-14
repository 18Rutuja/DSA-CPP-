#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {4, 5, 6};

    // Append elements of vec2 to vec1
    vec1.insert(vec1.end(), vec2.begin(), vec2.end());

    // Print the merged vector (vec1)
    cout << "Merged Vector: ";
    for (int num : vec1) { 
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
