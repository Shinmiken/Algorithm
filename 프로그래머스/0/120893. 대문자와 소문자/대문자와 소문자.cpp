#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

string solution(string my_string) 
{
    for(char &c : my_string)
    {
        c = islower(c) ? toupper(c) : tolower(c);
    }
    
    return my_string;
}