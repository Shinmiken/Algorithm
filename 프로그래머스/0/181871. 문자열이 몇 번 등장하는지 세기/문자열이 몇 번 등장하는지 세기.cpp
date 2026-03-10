#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string myString, string pat) 
{
    int answer = 0;
    
    int last = myString.find(pat);
    while(last != string::npos)
    {
        last = myString.find(pat, 1 + last);
        answer++;
    }
    
    return answer;
}