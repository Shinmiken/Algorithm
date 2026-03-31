#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) 
{
    int answer = 0;
    int n = board.size();
    int arrX[8] = {-1, 0, 1, 0, 1, 1, -1, -1};
    int arrY[8] = { 0,-1, 0, 1, 1,-1, 1, -1};
    
    vector<vector<int>> result = board;
    
    for(int y = 0; y < n; y++)
    {
        for(int x = 0; x < n; x++)
        {
            if(board[y][x] == 1)
            {
                for(int i = 0; i < 8; i++)
                {
                    int ny = y + arrY[i];
                    int nx = x + arrX[i];
                    
                    if(ny >= 0 && ny < n  && nx >= 0 && nx < n)
                    {
                        result[ny][nx] = 1;   
                    } 
                }
            }
        }
    }
    
    for(int y = 0; y < n; y++)
    {
        for(int x = 0; x < n; x++)
        {
            if(result[y][x] == 0)
            {
                answer ++;
            }
        }
    }
    
    return answer;
}