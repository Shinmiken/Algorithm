#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) 
{
    int answer = 0;
    int d = 0;
    if(common[2] - common[1] == common[1] - common[0]) 
    {
        d = common[1] - common[0];
        answer = common[common.size()- 1] + d;
    }
    else if(common[2] / common[1] == common[1] / common[0]) 
    {
        d = common[1] / common[0];
        answer = common[common.size()- 1] * d;
    }
    
    
    
    return answer;
}