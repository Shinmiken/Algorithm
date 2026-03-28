#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) 
{
    vector<int> answer(2, 0);
    
    int xSize = board[0] / 2;
    int ySize = board[1] / 2;
    int x = 0;
    int y = 0;
    
    for(auto dic : keyinput)
    {   
        if(dic == "left")
        {
            if(x - 1 >= -xSize)
            {
                x--;   
            }
            
        }
        else if(dic == "right")
        {
            if(x + 1 <= xSize)
            {
                x++;   
            }
        }
        else if(dic == "up")
        {
            if(y + 1 <= ySize)
            {
                y++;
            }
        }
        else if(dic == "down")
        {
            if(y - 1 >= -ySize)
            {
                y--;   
            }
        }
        
        answer[0] = x;
        answer[1] = y;
    }
    
    return answer;
}