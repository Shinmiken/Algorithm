#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string myString, string pat) 
{
    for(char &c : myString)
    {
        c = c == 'A' ? 'B' : 'A';
    }
    
    return myString.find(pat) != string::npos;
}