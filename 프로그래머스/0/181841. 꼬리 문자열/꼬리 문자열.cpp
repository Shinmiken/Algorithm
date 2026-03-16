#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) 
{
    string answer = "";
    
    for(auto it : str_list)
    {
        if(it.find(ex) == string::npos)
        {
            answer += it;
        }
    }
    
    return answer;
}