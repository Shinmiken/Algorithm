#include <string>
#include <vector>

using namespace std;

int Gcd(int a, int b)
{
    while(b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    
    return a;
}

int solution(int a, int b) 
{
    int gcd = Gcd(a, b);
    
    if(gcd != 1)
    {
        a /= gcd;
        b /= gcd;
    }
    
    while(b % 2 == 0) b /= 2;
    while(b % 5 == 0) b /= 5;
    
    if(b == 1) return 1;
    
    return 2;
}