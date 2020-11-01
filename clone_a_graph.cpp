// Runtime: 8 ms, faster than 94.21% of C++ online submissions for Clone Graph.
// Memory Usage: 8.8 MB, less than 99.10% of C++ online submissions for Clone Graph.

class Solution {
public:
   Node* cloneGraph(Node* node) {
	if (node == nullptr) {
		return nullptr;
	}

	unordered_map<Node*, Node*> map;

	queue<Node*> q;
	q.push(node);

	map[node] = new Node(node->val);

	while (!q.empty()) {
		Node* front = q.front();
		q.pop();

		for (Node* i : front->neighbors) {
			if (map.find(i) == map.end()) {
				map[i] = new Node(i->val);
				q.push(i);
			}
			map[front]->neighbors.push_back(map[i]);
		}
	}
	return map[node];
}
};
