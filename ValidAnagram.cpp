
using namespace std;

#include <iostream>
#include <vector>
#include <set>
#include <algorithm> 

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s == t)
            return true;
        
        return false;
    }
};

/*
    Time Complexity O(1)
    Space Complexity O(1)
*/