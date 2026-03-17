#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) 
{
    vector<string> answer;
    
    for(auto it : picture)
    {
        string str = "";
        
        for(auto c : it)
        {
            str += string(k, c);
        }
        
        for(int i = 0; i < k; i++)
        {
            answer.push_back(str);
        }
    }
    
    return answer;
}