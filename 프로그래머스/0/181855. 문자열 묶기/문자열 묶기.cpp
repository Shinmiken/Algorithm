#include <string>
#include <vector>

using namespace std;

int solution(vector<string> strArr) 
{
    int answer = 0;
    vector<int> num(31);
    
    for(const string &s : strArr)
    {
        num[s.size()]++;  
        answer = max(answer, num[s.size()]);
    }
    
    return answer;
}