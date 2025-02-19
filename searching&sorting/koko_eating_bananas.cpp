#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int FindMax(vector<int>& v) {
        int n = v.size();
        int MAXI = INT_MIN;

        for (int i = 0; i < n; i++) {
            MAXI = max(MAXI, v[i]);
        }
        return MAXI;
    }

    double requiredHours(vector<int>& v, int hourly) {
        double totalHours = 0;
        int n = v.size();
        for (int i = 0; i < n; i++) {
            totalHours += ceil((double)v[i] / (double)hourly);
        }
        return totalHours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = FindMax(piles);

        while (low <= high) {
            int mid = low + (high - low) / 2;
            double totalH = requiredHours(piles, mid); // Fixed variable name

            if (totalH <= h) {
                high = mid - 1;
            } else {
                low = mid + 1; 
            }
        }
        return low;
    }
};
