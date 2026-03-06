#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<int> indices) 
{
    sort(indices.rbegin(), indices.rend());

    for(int i : indices)
    {
        my_string.erase(i, 1);
    }
    
    return my_string;
}