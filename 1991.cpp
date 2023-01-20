#include <iostream>

using namespace std;

struct node {
    char name;
    node *left;
    node *right;
};

void pre(node root) {
    cout << root.name;
    if (root.left != NULL)
        pre(*root.left);
    if (root.right != NULL)
        pre(*root.right);
}

void in(node root) {
    if (root.left != NULL)
        in(*root.left);
    cout << root.name;
    if (root.right != NULL)
        in(*root.right);
}

void post(node root) {
    if (root.left != NULL)
        post(*root.left);
    if (root.right != NULL)
        post(*root.right);
    cout << root.name;
}

int main() {
    int n;
    cin >> n;

    node *tree = new node[n];

    for (int i = 0; i < n; i++) {
        int idx;
        char cur, l, r;
        cin >> cur >> l >> r;
        idx = cur - 'A';

        tree[idx].name = cur;

        if (l == '.') {
            tree[idx].left = NULL;
        } else {
            tree[idx].left = &tree[l - 'A'];
        }

        if (r == '.') {
            tree[idx].right = NULL;
        } else {
            tree[idx].right = &tree[r - 'A'];
        }
    }

    //ÀüÀ§
    pre(tree[0]);
    cout << '\n';
    in(tree[0]);
    cout << '\n';
    post(tree[0]);
}
