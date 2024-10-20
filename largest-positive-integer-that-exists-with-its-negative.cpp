class Solution {
public:
    int findMaxK(vector<int>& numbers) {
    int number = -1;
sort ( numbers.begin(), numbers.end());
for (int i= numbers.size()-1; i>0; i--){
    if (numbers[i] <0) break;
    for (int j =0; j<i;j++)
        if (numbers [j] == - numbers [i])
            return numbers[i];
}
        return -1;
}
};
