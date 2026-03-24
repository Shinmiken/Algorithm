#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) 
{
    int answer = 0;
    stringstream ss(my_string);
    string op = "+";
    int num = 0;
    
    while(ss >> num)
    {
        if(op == "+") answer += num;
        else answer -= num;
        
        ss >> op;
    }
    
    return answer;
}