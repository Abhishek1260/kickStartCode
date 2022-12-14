#include <iostream>
#include <vector>
#include <map>
using namespace std;

class node
{

public:
    int data;
    node *right;
    node *left;

    node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};

void getVerticalOrder(node *root, map<int, vector<int>> &mp, int hdis)
{
    if (root == NULL)
    {
        return;
    }
    mp[hdis].push_back(root->data);
    getVerticalOrder(root->left, mp, hdis - 1);
    getVerticalOrder(root->right, mp, hdis + 1);
}

int main()
{

    node *root = new node(10);
    root->left = new node(7);
    root->right = new node(4);
    root->left->left = new node(3);
    root->left->right = new node(11);
    root->right->left = new node(14);
    root->right->right = new node(6);

    map<int, vector<int>> mp;
    int hdis = 0;
    getVerticalOrder(root, mp, hdis);

    map<int, vector<int>>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        for (int i = 0; i < it->second.size(); i++)
        {
            cout << it->second[i] << " ";
        }
        cout << endl;
    }

    return 0;
}