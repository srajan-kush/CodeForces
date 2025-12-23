#include <bits/stdc++.h>
using namespace std;

struct Node {
    int ans, lr, rr;
};

Node merge(Node lNode, Node rNode) {
    Node n;
    int a = min(lNode.lr, rNode.rr);
    n.ans = lNode.ans + rNode.ans + a;
    n.lr = lNode.lr + rNode.lr - a;
    n.rr = lNode.rr + rNode.rr - a;
    return n;
}

void build(vector<Node> &seg, string &s, int idx, int left, int right) {
    if (left == right) {
        seg[idx].ans = 0;
        seg[idx].lr = (s[left] == '(');
        seg[idx].rr = (s[left] == ')');
        return;
    }

    int mid = (left + right) / 2;
    build(seg, s, 2*idx, left, mid);
    build(seg, s, 2*idx+1, mid+1, right);

    seg[idx] = merge(seg[2*idx], seg[2*idx+1]);
}

Node query(vector<Node> &seg, int idx, int left, int right, int ql, int qr) {
    if (ql > right || qr < left) {
        return {0, 0, 0};
    }
    if (ql <= left && right <= qr) {
        return seg[idx];
    }

    int mid = (left + right) / 2;
    Node lNode = query(seg, 2*idx, left, mid, ql, qr);
    Node rNode = query(seg, 2*idx+1, mid+1, right, ql, qr);

    return merge(lNode, rNode);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int n;
    cin >> s;
    cin >> n;

    int len = s.size();
    vector<Node> seg(4 * len);

    build(seg, s, 1, 0, len-1);

    while (n--) {
        int a, b;
        cin >> a >> b;
        Node res = query(seg, 1, 0, len-1, a-1, b-1);
        cout << res.ans * 2 << "\n";
    }

    return 0;
}
