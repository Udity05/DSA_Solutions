// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int n = arr1.size();
        
    int i = 0, j = 0;
    int count = 0;
    int m1 = -1, m2 = -1;

 while (count <= n) {
        if (i == n) {
            m1 = m2;
            m2 = arr2[j];
            j++;
        }
        // If all elements from arr2 are used
        else if (j == n) {
            m1 = m2;
            m2 = arr1[i];
            i++;
        }
        // Normal case: choose smaller of the two
        else if (arr1[i] < arr2[j]) {
            m1 = m2;
            m2 = arr1[i];
            i++;
        }
        else {
            m1 = m2;
            m2 = arr2[j];
            j++;
        }

        count++;
    }

    return m1 + m2;
    }
};