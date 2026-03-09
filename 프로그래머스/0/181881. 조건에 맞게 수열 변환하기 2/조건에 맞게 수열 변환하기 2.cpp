#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) 
{
    int answer = 0;
    
    vector<int> arr2;
    
    while(true)
    {
        arr2 = arr;
        for(int &i : arr)
        {
            if(i >= 50 && i % 2 == 0)
            {
                i /= 2;
            }
            else if(i < 50 && i % 2 != 0)
            {
                i = (i * 2) + 1;
            }
        }
        
        if(arr2 == arr)
        {
            break;
        }
        answer++;
    }
    
    
    return answer;
}