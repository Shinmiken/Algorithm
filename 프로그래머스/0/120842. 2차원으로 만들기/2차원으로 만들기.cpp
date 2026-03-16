#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) 
{
    vector<vector<int>> answer;
    
    for(int i= 0; i < num_list.size(); i+=n)
    {
        vector<int> k(num_list.begin() + i, num_list.begin() + n + i);
        answer.push_back(k);
    }
    
    return answer;
}