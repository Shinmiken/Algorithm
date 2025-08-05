using System;
using System.Collections.Generic;
using System.Linq;

public class Solution {
    public int solution(int a, int b, int c, int d) {
        int answer = 0;
        List<int> cnt = new List<int>() {a,b,c,d};
        List<int> countList = cnt.Distinct().ToList();
        
        if(countList.Count == 1)
        {
            answer = 1111 * a;    
        }
        else if(countList.Count == 2)
        {
            var num = cnt.GroupBy(x => x).Where(g => g.Count() > 1).Select(g => g.Key).ToList();
            if(num.Count == 1)
            {
                countList.Remove(num[0]);
                answer = (10 * num[0] + countList[0]) * (10 * num[0] + countList[0]);
            }
            else
            {
                answer = (countList[0] + countList[1]) * Math.Abs(countList[0] - countList[1]);
            }
        }
        else if(countList.Count == 3)
        {
            int num = cnt.GroupBy(x => x).Where(g => g.Count() > 1).Select(g => g.Key).Single();
            countList.Remove(num);
            answer = countList[0] * countList[1];
        }
        else if(countList.Count == 4)
        {
            answer = cnt.Min();
        }
        return answer;
    }
}