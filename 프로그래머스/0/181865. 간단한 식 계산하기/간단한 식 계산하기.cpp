#include <string>
#include <vector>

using namespace std;

int solution(string binomial) 
{
    int answer = 0;
    int op = 0;
    int a = 0;
    int b = 0;
    
    op = binomial.find(' ');
    a = stoi(binomial.substr(0,op));
    b = stoi(binomial.substr(op + 3));
    op++;
    
    if(binomial[op] == '+')
    {
        answer = a + b;
    }
    else if(binomial[op] == '-')
    {
        answer = a - b;
    }
    else if(binomial[op] == '*')
    {
        answer = a * b;
    }
    
    return answer;
}