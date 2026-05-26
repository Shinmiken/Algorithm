#include <string>
#include <vector>
#include <bitset>
#include <iostream>
using namespace std;

int solution(int n) 
{
    int cnt = 0;
    
    bitset<8> bit(n);
    
    for(int i = 0; i < bit.size(); i++)
    {
        if(bit[i] == 1) cnt++;
    }
    
    while(true)
    {
        n++;
        bitset<8> bit2(n);
        int count = 0;
       
        for(int i = 0; i < bit2.size(); i++)
        {
            if(bit2[i] == 1) count++;
        }
        
        if(cnt == count) break;
    }
    
    return n;
}