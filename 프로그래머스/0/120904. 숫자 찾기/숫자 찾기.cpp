#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) 
{
    string number = to_string(num);
    string pos = to_string(k);
    
    int answer = number.find(pos);
    
    return answer != string::npos ? ++answer : -1;
}