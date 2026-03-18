#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) 
{
    vector<vector<int>> answer(n, (vector<int>(n, 0)));
    int num = 1;
    
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int idx = 0;
    int x = 0, y = 0;
    
    while(num <= n*n)
    {
        answer[x][y] = num;
        
        int nx = x + dx[idx];
        int ny = y + dy[idx];
        
        if(answer[nx][ny] != 0 || nx == n || ny == n || nx < 0 || ny < 0)
        {
            idx = (idx + 1) % 4;
        }
        
        x += dx[idx];
        y += dy[idx];
        
        num++;
    }
    
    return answer;
}