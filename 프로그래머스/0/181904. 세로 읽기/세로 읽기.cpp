#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer;
    
    answer = my_string[c - 1];
    int k = m;
    
    while(my_string.length() > k)
    {
        answer += my_string[c - 1 + k];
        k += m;
    }
    
    return answer;
}