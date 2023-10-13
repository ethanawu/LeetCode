
using namespace std;

#include <iostream>
#include <vector>
#include <set>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::set<int> sets;
        
        for(int i = 0; i < nums.size(); i++) {
            if(sets.count(nums[i])) //check if num[i] is inside sets. if so then return true
                return true;
            sets.insert(nums[i]);
        }
        return false;
    }
};
/*
    Time Complexity: O(n)
    Space Complexity: O(1)
*/