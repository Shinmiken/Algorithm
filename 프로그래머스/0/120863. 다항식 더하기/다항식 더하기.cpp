#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) 
{
    string answer = "";
    
    stringstream ss(polynomial);
    string word;
    
    int x = 0;
    int num = 0;
    
    while(ss >> word)
    {
        if(word == "+") continue;
        
        if(word.find("x") == string::npos) // x가 있다면
        {
            num += stoi(word);
        }
        else
        {
            if(word.size() == 1)
            {
                x += 1;
            }
            else
            {
                x += stoi(word.substr(0, word.size() - 1));   
            }   
        }
    }
    
    if(x != 0)
    {
        if(x != 1)
        {
            answer += to_string(x);    
        }
        
        answer += 'x';
        
        if(num != 0)
        {
            answer += " + ";  
        }
    }
    if(num != 0)
    {
        answer += to_string(num);
    }
    
    return answer;
}