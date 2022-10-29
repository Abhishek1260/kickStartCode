#include <iostream>
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

int main()
{

    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    /**
     * @brief
     *
     *          1
     *         / \
     *        2   3
     *
     */

    root->left->left = new node(4);
    root->left->right = new node(5);

    /**
     * @brief
     *
     *
     *          1
     *         / \
     *        2   3
     *       / \
     *      4   5
     *
     */

    return 0;
}