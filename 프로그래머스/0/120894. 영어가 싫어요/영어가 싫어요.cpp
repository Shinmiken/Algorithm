#include <string>
#include <vector>
#include <map>

using namespace std;

long long solution(string numbers) 
{
    string answer = "";
    string ss;
    
    map<string,string> number = {
        {"zero", "0"}, {"one", "1"},{"two", "2"},{"three", "3"},{"four", "4"},{"five", "5"},{"six", "6"}, {"seven", "7"},{"eight", "8"},{"nine", "9"} };
    
    for(char c : numbers)
    {
        ss += c;
        for(int i = 0; i < number.size(); i++)
        {
            if(number.count(ss))
            {
                answer += number[ss];
                ss = "";
            }
        }
    }
    
    return stoll(answer);
}