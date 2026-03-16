#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> order) 
{
    int answer = 0;
    
    for(auto it : order)
    {
        if(it.find("cafelatte") != string::npos)
        {
            answer += 5000;
        }
        else if(it.find("americano") != string::npos)
        {
            answer += 4500;
        }
        else if(it.find("anything") != string::npos)
        {
            answer += 4500;
        }
    }
    
    return answer;
}