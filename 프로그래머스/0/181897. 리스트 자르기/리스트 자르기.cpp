#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) 
{
    vector<int> answer;
    
    int start = slicer[0];
    int end = slicer[1];
    int step = 1;
    
    if (n == 1)
    {
        start = 0;
    }
    else if(n == 2)
    {
        end = num_list.size() - 1;
    }
    else if(n == 4)
    {
        step = slicer[2];
    }
    
    for(int i = start; i <= end; i += step)
    {
        answer.push_back(num_list[i]);
    }
    
    return answer;
}