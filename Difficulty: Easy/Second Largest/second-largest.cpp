//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
public:
    // Function returns the second largest element
    int getSecondLargest(vector<int> &arr) {
        if (arr.size() < 2) {
            return -1; // No second largest element if the array has less than 2 elements
        }

        int max = arr[0];
        int second_max = -1;

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > max) {
                second_max = max; // Update second_max to the previous max
                max = arr[i];      // Update max to the current element
            } else if (arr[i] < max && arr[i] > second_max) {
                second_max = arr[i]; // Update second_max if the current element is less than max but greater than second_max
            }
        }

        return second_max;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends