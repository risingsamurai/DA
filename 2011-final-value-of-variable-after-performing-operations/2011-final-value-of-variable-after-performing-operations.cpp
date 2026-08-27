class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
    int x = 0;
    for (auto& o : operations) {
        if (o[1] == '+') x++;
        else x--;
    }
    return x;
}
};
