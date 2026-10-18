## Program

#include <iostream>
#include <vector>
using namespace std;

void validateTree(vector<int> tree, int n) {
    bool missing = false;

    cout << "Tree elements: ";
    for (int i = 1; i <= n; i++)
        cout << tree[i] << " ";
    cout << endl;

    for (int i = 1; i <= n; i++) {
        if (tree[i] == -1) {
            missing = true;
        }
        else if (missing) {
            cout << "Tree is NOT complete.\n";
            cout << "First violating position: "
                 << i << endl;
            return;
        }
    }

    cout << "Tree is complete.\n";
}

int main() {
    int n, t;

    cout << "Enter number of test trees: ";
    cin >> t;

    for (int k = 1; k <= t; k++) {
        cout << "\nTest Tree " << k << endl;
        cout << "Enter number of positions: ";
        cin >> n;

        vector<int> tree(n + 1);

        cout << "Enter elements in level order "
             << "(-1 for missing):\n";

        for (int i = 1; i <= n; i++)
            cin >> tree[i];

        validateTree(tree, n);
    }

    return 0;
}
