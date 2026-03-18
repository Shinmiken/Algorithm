#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) 
{
    vector<vector<int>> answer;
    
    int a = arr.size();
    int b = arr[0].size();
    int n = max(a, b);
    
    while(arr.size() < n)
    {
        arr.push_back(vector<int>(b, 0));
    }
    
    for(auto &it : arr)
    {
        it.resize(n, 0);
    }
    
    return arr;
}