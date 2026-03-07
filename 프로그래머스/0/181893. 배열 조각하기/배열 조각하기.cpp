#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) 
{
    int start = 0;
    int end = arr.size() - 1;
    
    for(int i = 0; i < query.size(); i++)
    {
        if(i % 2 == 0)
        {
            end = start + query[i];
        }
        else
        {
            start += query[i];
        }
    }
    
    return vector<int>(arr.begin() + start, arr.begin() + end + 1);
}