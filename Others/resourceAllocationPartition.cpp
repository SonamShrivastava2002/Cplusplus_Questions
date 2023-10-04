#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int findMaxLoad(vector<int>& burstTime, int n, int m, int k) {
    int low = *max_element(burstTime.begin(), burstTime.end());
    int high = accumulate(burstTime.begin(), burstTime.end(), 0);
    while (low < high) {
        int mid = low + (high - low) / 2;

        int requiredResources = 1;
        int currentLoad = 0;

        for (int i = 0; i < n; i++) {
            currentLoad += burstTime[i];
            if (currentLoad > mid) {
                requiredResources++;
                currentLoad = burstTime[i];
            }
        }

        if (requiredResources <= k)
            high = mid;
        else
            low = mid + 1;
    }

    return low;
}

int main() {
    int n = 3; // Number of resources
    int m = 5; // Number of tasks
    int k = 2; // Maximum tasks per resource
    vector<int> burstTime = {3, 2, 4, 2, 3}; // Processing time of tasks

    int maxTotalLoadTime = findMaxLoad(burstTime, n, m, k);

    cout << "Minimum possible value of the maximum total load time: " << maxTotalLoadTime << endl;

    return 0;
}