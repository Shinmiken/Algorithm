#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) 
{
    int answer = 0;
    vector<string> words = {"aya", "ye", "ma", "woo"};

    for (string s : babbling) 
    {
        for (string w : words) 
        {
            int pos = s.find(w);
            while (pos != string::npos) 
            {
                s.replace(pos, w.size(), " "); 
                pos = s.find(w);
            }
        }

        bool isBlank = true;
        for (char c : s) 
        {
            if (c != ' ') 
            {
                isBlank = false;
                break;
            }
        }
        if (isBlank) answer++;
    }

    return answer;
}