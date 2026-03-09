#include <string>
#include <vector>
#include <cctype>

using namespace std;

int solution(string myString, string pat) 
{
    int answer = 0;
    
    for(int i = 0; i < myString.size(); i++)
    {
       myString[i] = toupper(myString[i]);
    }
    
    for(int i = 0; i < pat.size(); i++)
    {
       pat[i] = toupper(pat[i]);
    }
    
    if(myString.find(pat) != string::npos)
    {
        answer = 1;
    }
    
    return answer;
}