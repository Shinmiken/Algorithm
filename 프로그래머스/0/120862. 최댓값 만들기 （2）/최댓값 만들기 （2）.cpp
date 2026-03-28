#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) 
{
    int k = numbers.size() - 1;
    
    sort(numbers.begin(), numbers.end());
    
    return max(numbers[k] * numbers[k - 1], numbers[0] * numbers[1]);
}