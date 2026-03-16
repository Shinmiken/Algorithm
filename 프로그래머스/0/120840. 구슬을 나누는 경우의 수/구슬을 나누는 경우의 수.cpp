#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(int balls, int share) 
{
    long long answer = 1;
    
    for(int i = 1; i <= share; i++)
    {
        answer = answer * (balls - i + 1) / i;
    }
    
    return answer;
}