#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

string solution(string myString) 
{
    transform(myString.begin(), myString.end(), myString.begin(), ::toupper);
    
    return myString;
}