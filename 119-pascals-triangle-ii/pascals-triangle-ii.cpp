class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row={1};
        long long current =1;
        for(int i=0; i<rowIndex;i++){
            current = current*(rowIndex-i);
            current = current/(i+1);
            row.push_back(current);
        }
        return row;
    }
};