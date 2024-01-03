// Christian Brown
// 1/3/2024

typedef struct
{
    int key;
    binNode *left;
    binNode *right;
    void *data;
} binNode;
// creates a binary node on the heap with specified key and data, default null values for left and right child pointers
binNode *createNode(int key, void *data);
// // returns min of the binary tree, does not replace or modify the tree
// binNode *getMin(binNode *head);
// // accepts DOUBLE pointer to head. returns the min and replaces it with the next in line
// binNode *extractMin(binNode *head);

// inserts a binary node into the tree, Olog(n)
void insertNode(binNode *head, binNode *newNode);
binNode *insertData(binNode *head, int key, void *data);
binNode *findNode(binNode *head, int key);
binNode *extractNode(binNode *head, int key);