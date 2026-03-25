#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    int k = nums.size() / 2;
    vector<int> count;
    
    for(int num : nums)
    {
        if(count.size() >= k) break;
        if(find(count.begin(), count.end(), num) == count.end()) count.push_back(num);
    }
    
    return count.size();
}