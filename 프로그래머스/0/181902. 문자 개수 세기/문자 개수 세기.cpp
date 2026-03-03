#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52, 0);
    
    for(int i = 0; i < my_string.length(); i++)
    {
          if(islower(my_string[i]))
          {
              answer[my_string[i] - 'a' + 26]++;
          }
        else
        {
            answer[my_string[i]- 'A']++;
        }
        
    }
    
    return answer;
}