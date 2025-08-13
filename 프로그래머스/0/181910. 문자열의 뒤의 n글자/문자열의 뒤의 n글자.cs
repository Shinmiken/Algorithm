using System;

public class Solution {
    public string solution(string my_string, int n) {
        string answer = "";
        char[] c = my_string.ToCharArray();
        for(int i = 0; i < n; i++)
        {
            answer += c[my_string.Length - (i + 1)];
        }
        char[] arr = answer.ToCharArray();
        Array.Reverse(arr, 0, answer.Length);
        answer = new string(arr);
        return answer;
    }
}