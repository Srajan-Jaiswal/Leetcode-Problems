class Solution {
	public:
		vector<int> advantageCount(vector<int>& A, vector<int>& B) {
			int n=A.size();
			map<int,queue<int>> m;
			for(int i=0;i<n;i++) m[B[i]].push(i);        // storing the index in a hashMap,
			                                            //  using queue inorder to help for collisons 
			sort(A.begin(),A.end());
			sort(B.begin(),B.end());
			vector<int> ans(n);
			
			int i=0,j=n-1;                             // using 2pointer approach to find the
			for(int k=0;k<n;k++) {                    //next greater element and storing at end
				if(A[k]>B[i]) ans[i++]=A[k];
				else ans[j--]=A[k];
			}
			
			vector<int> arr(n);                       //retriving answer to original order
			for(int i=0;i<n;i++) {
				int idx= m[B[i]].front();
				m[B[i]].pop();
				arr[idx]=ans[i];
			}
			return arr;                              //returning arr
		}
	};
