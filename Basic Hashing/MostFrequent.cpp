// find the most frequent element 
#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits> // for INT_MAX

using namespace std;

int mostFrequentElement(const vector<int>& arr) {
    unordered_map<int, int> freq;
    int maxFreq = 0;
    int result = INT_MAX;

    // Count frequency
    for (int num : arr) {
        freq[num]++;
        if (freq[num] > maxFreq) {
            maxFreq = freq[num];
            result = num;
        } else if (freq[num] == maxFreq) {
            result = min(result, num); // pick smaller if tie
        }
    }

    return result;
}

int main() {
    // Example 1
    vector<int> arr1 = {1, 2, 2, 3, 3, 3};
    cout << "Most frequent: " << mostFrequentElement(arr1) << endl;

    // Example 2
    vector<int> arr2 = {4, 4, 5, 5, 6};
    cout << "Most frequent: " << mostFrequentElement(arr2) << endl;

    return 0;
}

