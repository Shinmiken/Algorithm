using System;

public class Solution {
    public int[] solution(int[] arr, int[,] queries) {
        int queryCount = queries.GetLength(0);
        int[] answer = new int[queryCount];

        for (int i = 0; i < queryCount; i++) {
            int s = queries[i, 0];
            int e = queries[i, 1];
            int k = queries[i, 2];
            int min = int.MaxValue;
            bool found = false;

            for (int j = s; j <= e; j++) {
                if (arr[j] > k && arr[j] < min) {
                    min = arr[j];
                    found = true;
                }
            }

            answer[i] = found ? min : -1;
        }

        return answer;
    }
}