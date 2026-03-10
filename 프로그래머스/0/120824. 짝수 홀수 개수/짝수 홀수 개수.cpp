#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) 
{
    int odd = 0;
    int evn = 0;
    
    for(int num : num_list)
    {
        if(num % 2 == 0)
        {
            evn++;
        }
        else
        {
            odd++;
        }
    }
    
    return vector<int> {evn, odd};
}