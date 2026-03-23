#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) 
{
    int answer = array[0];
    int min = abs(array[0] - n);
    for(int i = 1; i < array.size(); i++)
    {
        if(min > abs(array[i] - n))
        {
            min = abs(array[i] - n);
            answer = array[i];
        }
        else if(min == abs(array[i] - n))
        {
            answer = answer < array[i] ? answer : array[i];
        }
    }
    
    return answer;
}