#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<string> solution(string myStr) 
{
    vector<string> answer;
    string word;
    
    for(char c : myStr)
    {
        if(c == 'a' || c == 'b' || c == 'c')
        {
            if(!word.empty())
            {
                answer.push_back(word);
            }
            word = "";
        }
        else
        {
            word += c;
        }
    }
    
    if(word != "")
    {
        answer.push_back(word);
    }
    
    if(answer.empty())
    {
        answer.push_back("EMPTY");
    }
    
    return answer;
}