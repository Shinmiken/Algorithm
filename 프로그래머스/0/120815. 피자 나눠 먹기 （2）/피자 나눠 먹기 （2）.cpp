#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int cnt = 1;
    int x = 6;
    
    while(true)
    {
        if(x % n != 0)
        {
            cnt++;
            x = 6 * cnt;
        }
        else
        {
            break;
        }
    }
    
    return cnt;
}