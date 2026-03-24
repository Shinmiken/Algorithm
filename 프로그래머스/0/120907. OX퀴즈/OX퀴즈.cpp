#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) 
{
    vector<string> answer;
    
    for(string s : quiz)
    {
        stringstream ss(s);
        int a, b, c;
        string op, equal;
        
        ss >> a >> op >> b >> equal >> c;
        
        int result = op == "+" ? a + b : a - b;
        
        if(result == c) answer.push_back("O");
        else answer.push_back("X");
    }
    
    return answer;
}