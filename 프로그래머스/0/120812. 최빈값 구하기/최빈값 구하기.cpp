#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) 
{
    int answer = 0;
    
    unordered_map<int, int> count;
    
    for(int num : array)
    {
        count[num]++;
    }
    
    int maxCount = 0;
    int node = -1;
    bool isGet = true;
    
    for(auto &x : count)
    {
        if(x.second > maxCount)
        {
            maxCount = x.second;
            node = x.first;
            isGet = false;
        }
        else if(x.second == maxCount)
        {
            isGet = true;
        }
    }
    
    if(isGet)
    {
        return -1;
    }
    
    return node;
}