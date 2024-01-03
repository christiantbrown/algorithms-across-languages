// Christian Brown
//  1/3/2024
//  see binary-tree.h

#include "./binary-tree.h"
#include <stdlib.h>

binNode *createNode(int key, void *data)
{
    binNode *node = malloc(sizeof(binNode));

    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->data = data;

    return node;
}

void insertNode(binNode *head, binNode *newNode)
{
    // if there is no left child and our key is less than the node we are checking, become that nodes left child
    // else repeat this process on the node left of the one we are checking
    if (newNode->key < head->key)
    {
        if (head->left == NULL)
        {
            head->left = newNode;
        }
        else
        {
            insertNode(head->left, newNode);
        }
    }

    // if there is no right child and our key is greater than or equal to the node we are checking, become that nodes right child
    // else repeat this process on the node right of the one we are checking
    else
    {
        if (head->right == NULL)
        {
            head->right = newNode;
        }
        else
        {
            insertNode(head->right, newNode);
        }
    }
}

binNode *findNode(binNode *head, int key)
{

    // this isn't dangerous, short circuit evaluation makes this expression safe
    if (head == NULL | head->key == key)
    {
        return head;
    }
    else if (head->key < key)
    {
        return findNode(head->left, key);
    }
    else
    {
        return findNode(head->right, key);
    }
}
binNode *extractNode(binNode *head, int key)
{
}