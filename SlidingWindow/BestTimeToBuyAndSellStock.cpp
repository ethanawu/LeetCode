using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

int maxProfit(vector<int>& prices) {
    int l = 0;
    int r = 1;
    int profit = prices[l]; //keeps track of top profit
    

    while (r < prices.size()) {
        if(profit < 0) {
            l++;
        }
    }
}

int main() {
    
    return 0;
}