typedef struct tnode Node;

struct tnode {
    int key;
    Node *leftNode;
    Node *rightNode;
};

void initLeafNode(Node *node, int key) {
    node->key = key;
    node->leftNode = NULL; 
    node->rightNode = NULL;
}

void initNode(Node *node, int key, Node *leftN, Node *rightN) {
    node->key = key;
    node->leftNode = leftN; 
    node->rightNode = rightN;
}

void visitNodes(Node *root) {

    if(root->key) printf("%d \n",root->key);

    if(root->leftNode) visitNodes(root->leftNode);
    
    if(root->rightNode) visitNodes(root->rightNode);
}