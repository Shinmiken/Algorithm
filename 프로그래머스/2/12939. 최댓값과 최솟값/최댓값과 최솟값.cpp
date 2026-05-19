#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

string solution(string s) 
{
    string answer = "";
    string c;
    stringstream ss(s);
    vector<int> nums;
    
    while(ss >> c)
    {
        nums.push_back(stoi(c));    
    }
    
    sort(nums.begin(), nums.end());
    
    answer += to_string(nums[0]);
    answer += " ";
    answer += to_string(nums.back());
    
    return answer;
}