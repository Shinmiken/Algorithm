#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

// first, second 대체 - 짧은 단어로 교체
#define X first
#define Y second

int main()
{
    vector<vector<int>> map; // 맵 생성 배열
    queue<pair<int, int>> b_que; // BFS확인 배열
    vector<vector<int>> dict; // 방문 거리 저장 배열

    // 좌우 상하 확인용 배열
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};

    // 맵 크기 변수
    int n, m;
    cin >> n >> m;

    // 칸 수 카운트 변수
    int cnt = 0;

    // 맵 입력
    for (int i = 0; i < n; i++)
    {
        map.push_back(vector<int>());
        dict.push_back(vector<int>());

        string k = "";
        cin >> k;

        for (int j = 0; j < k.size(); j++)
        {
            map[i].push_back(k[j] - '0');
            dict[i].push_back(0);
        }        
    }

    // 시작점 추가
    b_que.push({ 0, 0 });
    dict[0][0] = 1;

    // BFS 확인
    while (!b_que.empty())
    {
        pair<int, int> cur = b_que.front();
        b_que.pop();
        //cout << "( " << cur.X << ", " << cur.Y << " ) -> ";

        for (int i = 0; i < 4; i++)
        {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            else if (map[nx][ny] != 1 || dict[nx][ny] != 0) continue;

            b_que.push({ nx, ny });
            dict[nx][ny] = dict[cur.X][cur.Y] + 1;
        }
    }

    cout << dict[n - 1][m - 1];
}
