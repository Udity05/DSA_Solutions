//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) { // Corrected loop bound
            int mini = i; // Assume the current index is the minimum
            for (int j = i + 1; j < n; j++) { // Start from i + 1
                if (arr[j] < arr[mini]) {
                    mini = j; // Update the index of the minimum element
                }
            }
            // Swap the found minimum element with the element at index i
            if (mini != i) { // Optional: Check if a swap is needed
                int temp = arr[mini];
                arr[mini] = arr[i];
                arr[i] = temp;
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution obj;
        obj.selectionSort(a);

        Array::print(a);
        cout << "~" << endl;
    }
}

// } Driver Code Ends