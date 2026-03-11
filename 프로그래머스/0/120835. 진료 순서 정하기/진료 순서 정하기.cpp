#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) 
{
    vector<int> answer = emergency;
    vector<int> sorted = emergency;
    
    sort(sorted.rbegin(), sorted.rend());
    
    for(int i = 0; i < emergency.size(); i++)
    {
        for(int j = 0; j < sorted.size(); j++)
        {
            if(emergency[i] == sorted[j])
            {
                answer[i] = j + 1;
            }
        }    
    }
    
    return answer;
}