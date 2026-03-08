#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) 
{
    int odd = 0;
    int evn = 0;
    
    for(int i = 0; i < num_list.size(); i++)
    {
        if(i % 2 == 0)
        {
            odd += num_list[i];
        }
        else
        {
            evn += num_list[i];
        }
    }
    
    return odd > evn ? odd : evn;
}