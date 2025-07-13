//Given an array nums of size n which may contain duplicate elements, return a list of pairs where
// each pair contains a unique element from the array and its frequency in the array.
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<vector<int>> countFrequencies(const vector<int>& nums) {
    unordered_map<int, int> freqMap;
    vector<vector<int>> result;

    // Count frequencies
    for (int num : nums) {
        freqMap[num]++;
    }

    // Build result vector
    for (const auto& entry : freqMap) {
        result.push_back({entry.first, entry.second});
    }

    return result;
}

int main() {
    vector<int> nums = {1, 2, 2, 1, 3};
    vector<vector<int>> output = countFrequencies(nums);

    cout << "Output: [";
    for (const auto& pair : output) {
        cout << "[" << pair[0] << ", " << pair[1] << "], ";
    }
    cout << "]" << endl;

    return 0;
}

