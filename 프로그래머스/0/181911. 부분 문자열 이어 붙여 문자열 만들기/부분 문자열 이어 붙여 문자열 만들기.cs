using System;

public class Solution {
    public string solution(string[] my_strings, int[,] parts) {
        string answer = "";
        string str = "";
        for(int i = 0; i < my_strings.Length; i++)
        {
            int num = parts[i, 0];
            int num2 = parts[i, 1] - num + 1;
            answer += my_strings[i].Substring(num, num2);
        }
        return answer;
    }
}