#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> spell, vector<string> dic) 
{
    for(auto str : dic)
    {
        sort(spell.begin(), spell.end());
        sort(str.begin(), str.end());
        
        string word = "";
        for(auto it : spell)
        {
            word += it;
        }
        
        if(word == str)
        {
            return 1;
        }
    }
    
    return 2;
}