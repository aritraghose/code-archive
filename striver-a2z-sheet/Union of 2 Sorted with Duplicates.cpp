// https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1


//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        vector<int> unionArr;
        int i=0, j=0, k=-1;
        
        while(i<a.size() && j<b.size()) {
            if (a[i] <= b[j]) {
                if (k==-1 || unionArr[k] < a[i]) {
                    unionArr.push_back(a[i]);
                    k++;
                }
                i++;
            } else if (a[i] > b[j]) {
                if  (k==-1 || unionArr[k] < b[j]) {
                    unionArr.push_back(b[j]);
                    k++;
                }
                j++;
            }
        }
        
        while (i < a.size()) {
            if (k==-1 || unionArr[k] < a[i]) {
                unionArr.push_back(a[i]);
                k++;
            }
            i++;
        }
        
        while (j < b.size()) {
            if  (k==-1 || unionArr[k] < b[j]) {
                unionArr.push_back(b[j]);
                k++;
            }
            j++;
        }
        return unionArr;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a, b;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.findUnion(a, b);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends