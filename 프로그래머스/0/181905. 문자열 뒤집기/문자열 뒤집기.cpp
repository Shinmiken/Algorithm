#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = my_string;
    
    int i = 0;
    
    int k = (e - s + 1) / 2;
    
    while(i < k)
    {
        char swa = answer[s + i];
        answer[s + i] = answer[e - i];
        answer[e - i] = swa;
        i++;
    }
    return answer;
}