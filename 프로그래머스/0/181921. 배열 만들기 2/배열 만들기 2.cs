using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(int l, int r) {
        List<int> answer = new List<int>();
        
        for(int i = l; i <= r; i++)
        {
            string str = i.ToString();
            for(int j = 0; j < str.Length; j++)
            {
                if(str[j] == '5' || str[j] == '0')
                {
                    if(j == str.Length - 1)
                    {
                        answer.Add(i);    
                    }
                }
                else
                {
                    break;    
                }
            }
        }
        if(answer == null || answer.Count == 0)
            {
                answer.Add(-1);
            }
        return answer.ToArray();
    }
}