#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) 
{
    int answer = 0;
    int arr[201] = {0};
    
    for(auto line : lines)
    {
        for(int i = line[0]; i < line[1]; i++)
        {
            arr[i + 100]++;
        }
    }
    
    for(int i = 0; i < 200; i++)
    {
        if(arr[i] >= 2) answer++;
    }
    
    return answer;
}