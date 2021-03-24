class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
	unordered_map<int, long> freqs;
	for (auto i : arr) {
		freqs[i]++;
	}
	sort(arr.begin(), arr.end());
	int total = 0;
	for (int i = 0; i < arr.size() - 2; i++) {
		if (i == 0 || i > 0 && arr[i] != arr[i - 1]) {
			int j = i + 1, k = arr.size() - 1;
			while (j < k) {
				if (j > i + 1 && arr[j] == arr[j - 1]) {
					j++;
				} else if (k < arr.size() - 1 && arr[k] == arr[k + 1]) {
					k--;
				} else {
					if (arr[j] + arr[k] + arr[i] > target) {
						k--;
					} else if (arr[j] + arr[k] + arr[i] < target) {
						j++;
					} else {
						if (arr[i] != arr[j] && arr[j] != arr[k]) {
							total += (freqs[arr[i]] * freqs[arr[j++]] * freqs[arr[k--]]) % 1000000007;
						} else if (arr[i] == arr[j] && arr[j] != arr[k]) {
							total += ((freqs[arr[i]] * (freqs[arr[j++]] - 1)) * freqs[arr[k--]] / 2) % 1000000007;
						} else if (arr[i] != arr[j] && arr[j] == arr[k]) {
							total += (freqs[arr[i]] * (freqs[arr[j++]] * (freqs[arr[k--]] - 1)) / 2) % 1000000007;
						} else {
							total += ((freqs[arr[i]] * (freqs[arr[j++]] - 1) * (freqs[arr[k--]] - 2)) / 6) % 1000000007;
						}
					}
				}
			}
		}
	}
	return total;
    }
};
