#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) 
{
    vector<int> answer;
    
    for(int num = num_list.size() - 1; num >= 0; num--)
    {
        answer.push_back(num_list[num]);
    }
    
    return answer;
}