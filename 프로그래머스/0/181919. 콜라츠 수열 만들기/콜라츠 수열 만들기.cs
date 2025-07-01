using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(int n) {
        List<int> list = new List<int>();
        
        list.Add(n);
        for(int i = 0; i < 1000; i++)
        {
            if(n % 2 == 0)
            {
                n = n / 2;
                if(n == 1)
                {
                    list.Add(n);
                    break;
                }
            }
            else
            {
                n = 3 * n + 1;
                if(n == 1)
                {
                    list.Add(n);
                    break;
                }
            }
            list.Add(n);
        }
        int[] answer = list.ToArray();
        return answer;
    }
}