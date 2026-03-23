#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) 
{
    vector<int> answer;
    int k = array[0];
    int idx = 0;
    
    for(int i = 1; i < array.size(); i++)
    {
        if(k < array[i])
        {
            k = array[i];
            idx = i;
        }
    }
    
    answer.push_back(k);
    answer.push_back(idx);
    
    return answer;
}