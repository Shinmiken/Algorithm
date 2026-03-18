#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) 
{
    stringstream ss(s);
    string word;
    
    int answer = 0;
    int back = 0;
    
    while(ss >> word)
    {
        if(word == "Z")
        {
            answer -= back;
        }
        else
        {
            back = stoi(word);
            answer += back;
        }
    }
    
    return answer;
}