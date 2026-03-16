#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) 
{
    int n = 0;
    
    for(int i = 1; i < k; i++)
    {
        n += 2;
        if(n >= numbers.size())
        {
            n %= numbers.size();
        }
    }
    
    return numbers[n];
}