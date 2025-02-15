// https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1



//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int size = arr.size(), maxLength = 0;
        long long int sum = 0;
        
        map<int, int> prefixSum;
        
        for (int i=0; i<size; i++) {
            sum += arr[i];
            
            if (sum == k) {
                maxLength = max(maxLength, i+1);
            }
            
            long long int rem = sum-k;
            
            if (prefixSum.find(rem) != prefixSum.end()) {
                maxLength = max(maxLength, i-prefixSum[rem]);
            }
            
            if (prefixSum.find(sum) == prefixSum.end()) {
                prefixSum[sum] = i;
            }
        }
        
        return maxLength;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends