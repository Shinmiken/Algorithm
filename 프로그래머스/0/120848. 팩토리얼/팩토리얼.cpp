#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    int answer = 0;
    int cnt = 1;
    
    for(int i = 1; i <= 10; i++)
    {
        cnt *= i;
        
        if(cnt == n) 
        {
            answer = i;
            break;
        }
        else if(cnt > n)
        {
            answer = i - 1;
            break;
        }
    }
    
    return answer;
}