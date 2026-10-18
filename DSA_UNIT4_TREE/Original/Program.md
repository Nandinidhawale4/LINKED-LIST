## Program

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n;
    cout << "Enter number of positions: ";
    cin >> n;

    vector<int> tree(n + 1);

    cout << "Enter elements in level order (-1 for missing):\n";
    for (int i = 1; i <= n; i++) 
    {
        cin >> tree[i];
    }

    bool missing = false;
    bool complete = true;

    for (int i = 1; i <= n; i++)
    {
        if (tree[i] == -1)
        {
            missing = true;
        }
        else if (missing) 
        {
            cout << "Binary tree is NOT complete.\n";
            cout << "First violating position: " << i << endl;
            complete = false;
            break;
        }
    }

    if (complete) 
    {
        cout << "Binary tree is complete.\n";
    }

    return 0;
}
