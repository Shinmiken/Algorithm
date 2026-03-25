#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 2;
    int sum = 1;
    
    while(sum * sum <= n)
    {
        if(sum * sum == n)
        {
            answer = 1;
        }
        sum++;
    }
    
    return answer;
}