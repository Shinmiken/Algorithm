#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<vector<int>> dots) 
{
    int minX = dots[0][0];
    int maxX = dots[0][0];
    int minY = dots[0][1];
    int maxY = dots[0][1];
    
    for(auto it : dots)
    {
        minX = min(minX, it[0]);
        maxX = max(maxX, it[0]);
        
        minY = min(minY, it[1]);
        maxY = max(maxY, it[1]);
    }
    
    return (maxX - minX) * (maxY - minY);
}