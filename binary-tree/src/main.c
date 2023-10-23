#include <stdio.h>
#include "node.h"

int main(int argc, char *argv[]) {
    Node rootNode, myNode2, myNode3, myNode4, myNode5;

    initLeafNode(&myNode2, 10);
    initLeafNode(&myNode3, 12);
    
    initNode(&myNode4, 15, &myNode2, &myNode3);
    initLeafNode(&myNode5, 8);

    initNode(&rootNode, 11, &myNode4, &myNode5);

    visitNodes(&rootNode);
    
    return 0;
}