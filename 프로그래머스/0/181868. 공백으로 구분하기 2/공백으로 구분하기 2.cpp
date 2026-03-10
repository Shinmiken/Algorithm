#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(string my_string) 
{
    vector<string> answer;
    
    stringstream str(my_string);
    string word;
    
    while(str >> word)
    {
        answer.push_back(word);
    }
    
    return answer;
}