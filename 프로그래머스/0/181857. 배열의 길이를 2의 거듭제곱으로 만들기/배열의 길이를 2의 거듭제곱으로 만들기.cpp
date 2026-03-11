#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
    int k = 1;
    
    while(k < arr.size())
    {
        k *= 2;
    }
    
    arr.resize(k, 0);
    
    return arr;
}