#include "TwoSum.h"

vector<int> TwoSum::twoSum(vector<int>& nums, int target)
{
    vector<int>* result = new vector<int>;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                result->push_back(i);
                result->push_back(j);
                return *result;
            }
        }
    }
    return *result;
}
