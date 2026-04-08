#include <string>
#include <vector>
using namespace std;

int solution(int i, int j, int k) 
{
    int answer = 0;
    
    for (int num = i; num <= j; num++)
    {
        string s = to_string(num);
        
        for (char c : s)
        {
            if (c - '0' == k) answer++;
        }
    }
    
    return answer;
}