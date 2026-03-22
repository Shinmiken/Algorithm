#include <string>
#include <vector>

using namespace std;

int solution(int order) 
{
    int answer = 0;
    
    while(order > 0)
    {
        int k = order % 10;
        if(k == 3 || k == 6 || k == 9)
        {
            answer++;
        }
        order /= 10;
    }
    
    return answer;
}