using System;

public class Solution {
    public bool solution(bool x1, bool x2, bool x3, bool x4) {
        bool answer = true;
        if(x1 || x2)
        {
            x1 = true;    
        }
        else
        {
            x1 = false;
        }
        if(x3 || x4)
        {
            x2 = true;
        }
        else
        {
            x2 = false;
        }
        if(x1 && x2)
        {
            answer = true;
        }
        else
        {
            answer = false;    
        }
        return answer;
    }
}