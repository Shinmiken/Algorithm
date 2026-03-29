#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) 
{
    int answer = 0;
    int maxk = max(sides[0], sides[1]);
    int mink = min(sides[0], sides[1]);
    int k = maxk;
    
    for(int i = 1; i < sides[0] + sides[1]; i++)
    {
        if(maxk < mink + i && maxk >= i)
        {
            answer++;
        }
        if(sides[0] + sides[1] > k && k > maxk)
        {
            answer++;
        }
        
        k++;
    }
    
    return answer;
}