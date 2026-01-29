#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    
    int k = my_string.length();
    
    for(int i = 0; i < k; i++)
    {
        if(my_string == is_suffix)
        {
            answer = 1;
            break;
        }
        
        my_string.erase(0,1);
    }
    
    return answer;
}