// Runtime: 56 ms, faster than 29.46% of C++ online submissions for Find the Winner of the Circular Game.
// Memory Usage: 24.4 MB, less than 11.28% of C++ online submissions for Find the Winner of the Circular Game.
class Solution {
public:
    int findTheWinner(int n, int k) {
	queue<int> q;
	for (int i = 1; i <= n; i++) q.push(i);
	int curr_k = 0;
	while (q.size()>1) {
		curr_k = k;
		while (curr_k > 1) {
			int f = q.front();
			q.pop();
			q.push(f);
            curr_k--;
		}
		q.pop();
	}
	return q.front();
}
};
