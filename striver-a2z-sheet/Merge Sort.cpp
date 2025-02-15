// https://www.geeksforgeeks.org/problems/merge-sort/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if (l == r) return;
        
        int mid = (r+l)/2;
        
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        
        vector<int> temp;
        
        int i = l, j = mid+1;
        
        while(i <= mid && j <= r) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i]);
                i++;
            } else {
                temp.push_back(arr[j]);
                j++;
            }
        }
        
        while(i<=mid) {
            temp.push_back(arr[i]);
            i++;
        }
        
        while(j<=r) {
            temp.push_back(arr[j]);
            j++;
        }
        
        for (i=l; i <= r; i++) {
            arr[i] = temp[i-l];
        }
        
        
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        obj.mergeSort(arr, 0, arr.size() - 1);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends