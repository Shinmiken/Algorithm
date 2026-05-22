#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) 
{
    vector<int> answer;
    
    int cnt = 0;
    int removeZeroCnt = 0;
    
    while(true)
    {
        string str;
    
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != '0') str += s[i];
            else removeZeroCnt++;
        }

        int size = str.size();
        string ss;

        while(size != 0)
        {
            if(size % 2 == 1) ss += "1";
            else ss += "0";

            size /= 2;
        }
        
        cnt++;
        if(ss == "1") break;
        s = ss;
        
    }
    
    answer.push_back(cnt);
    answer.push_back(removeZeroCnt);
    
    return answer;
}