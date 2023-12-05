#include <iostream>
#include <vector>

using namespace std;

void printSumTriangle(const vector<int>& arr) {
    if (arr.empty()) {
        return;
    }
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    vector<int> new_arr;
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        new_arr.push_back(arr[i] + arr[i + 1]);
    }
    printSumTriangle(new_arr);
}

int main() {
    vector<int> sample_input = {5, 4, 3, 2, 1};
    printSumTriangle(sample_input);
    return 0;
}
