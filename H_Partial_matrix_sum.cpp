#include <iostream>
#include <vector>
#include <functional>
#include <cassert>
using namespace std;
int customMax(int a, int b) {
    return max(a, b);
}

class Node {
public:
    Node* parent;
    int l, r;
    Node* lc;
    Node* rc;
    int val;
    function<int(int, int)> op;

    Node(Node* p, int left, int right, function<int(int, int)> operation=customMax) 
        : parent(p), l(left), r(right), lc(nullptr), rc(nullptr), val(right - left), op(operation) {}
    
    void split(int x) {
        assert(l <= x && x <= r);
        if (x == l || x == r) {
            return;
        }
        if (lc) {
            if (x == lc->r) {
                return;
            }
            if (x < lc->r) {
                lc->split(x);
            } else {
                rc->split(x);
            }
            val = op(lc->val, rc->val);
        } else {
            lc = new Node(this, l, x, op);
            rc = new Node(this, x, r, op);
            val = op(x - l, r - x);
        }
    }
};

vector<int> getMaxArea(int w, int h, vector<bool>& isVertical, vector<int>& distance) {
    Node* w_root = new Node(nullptr, 0, w);
    Node* h_root = new Node(nullptr, 0, h);
    vector<int> ans;
    
    for (int i = 0; i < isVertical.size(); ++i) {
        if (isVertical[i]) {
            w_root->split(distance[i]);
        } else {
            h_root->split(distance[i]);
        }
        ans.push_back(w_root->val * h_root->val);
    }
    
    delete w_root;
    delete h_root;
    
    return ans;
}

int main() {
    int w, h;
    cin >> w >> h;
    
    int isVertical_count;
    cin >> isVertical_count;
    
    vector<bool> isVertical(isVertical_count);
    for (int i = 0; i < isVertical_count; ++i) {
        int iv;
        cin >> iv;
        isVertical[i] = (iv != 0);
    }
    
    int distance_count;
    cin >> distance_count;
    
    vector<int> distance(distance_count);
    for (int i = 0; i < distance_count; ++i) {
        cin >> distance[i];
    }
    
    vector<int> result = getMaxArea(w, h, isVertical, distance);
    
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << endl;
    }
    
    return 0;
}
