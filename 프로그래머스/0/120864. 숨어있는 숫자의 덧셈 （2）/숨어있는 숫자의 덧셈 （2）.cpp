#include <string>
#include <vector>

using namespace std;

int solution(string my_string) 
{
    int answer = 0;
    int num = 0;
    
    for(auto it : my_string)
    {
        if(it - '0' < 10)
        {
            if(num != 0)
            {
                num *= 10;
            }
            
            num += it - '0';
        }
        else if(num != 0)
        {
            answer += num;
            num = 0;
        }
    }
    
    answer += num;
    return answer;
}