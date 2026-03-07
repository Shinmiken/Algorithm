#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    
    int start = -1; 
    int end = -1;
    
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == 2)
        {
            if(start == -1)
            {
                start = i;
            }
            end = i;
        }
    }
    
    if(start == -1)
    {
        return {-1};
    }
    
    return vector<int>(arr.begin() + start, arr.begin() + end + 1);
}