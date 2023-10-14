using namespace std;
#include <vector>
#include <iostream>

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int targetIdx = nums.size() - 1;
        for(int i = n - 2; i >= 0; i--) {
            if(i + nums[i] >= targetIdx) 
                targetIdx = i;
        }
        if(targetIdx == 0)
            return true;
        return false;
    }
};

/*
    Time Complexity O(n)
    Space Complexity
*/