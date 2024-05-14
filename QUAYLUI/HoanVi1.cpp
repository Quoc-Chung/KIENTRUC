#include <iostream>
#include <vector>

using namespace std;

void backtrack(vector<char>& nums, vector<char>& temp, vector<bool>& used) {
    if (temp.size() == nums.size()) {
        for (char ch : temp) {
            cout << ch << " ";
        }
        cout << endl;
        return;
    }
    
    for (int i = 0; i < nums.size(); ++i) {
        if (!used[i]) {
            used[i] = true;
            temp.push_back(nums[i]);
            backtrack(nums, temp, used);
            temp.pop_back();
            used[i] = false;
        }
    }
}

void generatePermutations(vector<char>& nums) {
    vector<bool> used(nums.size(), false);
    vector<char> temp;
    backtrack(nums, temp, used);
}

int main() {
    vector<char> nums = {'a', 'b', 'c'};
    generatePermutations(nums);
    return 0;
}
