#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) 
{
    for(int i = 0; i < strArr.size(); i++)
    {
        if(i % 2 == 0)
        {
            for(char &str : strArr[i])
            {
                str = tolower(str);
            }
        }
        else
        {
            for(char &str : strArr[i])
            {
                str = toupper(str);
            }
        }
    }
    
    return strArr;
}