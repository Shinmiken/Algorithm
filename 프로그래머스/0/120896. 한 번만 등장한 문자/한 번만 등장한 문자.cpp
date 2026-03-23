#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

string solution(string s) 
{
    string answer = "";
    map<char, int> count;
    
    for(auto it : s)
    {
        count[it]++;
    }
    
    for(auto it : count)
    {
        if(it.second == 1)
        {
            answer += it.first;
        }
    }
    
    return answer;
}