#ifndef BTREE_H
#define BTREE_H
#include "bTreeNode.h"

class bTree
{
    private:
        string indexName;
        indexType indtype;
        unsigned int root;
        unsigned int charLength;
        std::vector<unsigned int> emptyBlock;
        std::vector<unsigned int> findPath;
        bufferManager* bm;
        //test
        //int blockCount;
        //std::vector<BYTE*> blocks;
        //test
    public:
        bTree(string name, bufferManager* bfm, indexType it, int length);
        bTree(string name, indexType t, int length, bufferManager* bfm);
        ~bTree();
        string getName();
        bTreeNode findFirstNode(index ind);
        std::vector<unsigned int> findAll(index ind);
        std::vector<unsigned int> findGreater(index ind, bool equal);
        std::vector<unsigned int> findLess(index ind, bool equal);
        bTreeNode assignNode(unsigned int blockNo);
        bTreeNode createNode(nodeType nt);
        void freeNode(bTreeNode& node);
        void insertIndex(index ind);
        void insertNode(unsigned int parent, unsigned int child, unsigned int pos, index ind);
        index findMinIndex(bTreeNode& node);
        void deleteIndex(index ind);
        void deleteNode(unsigned int parent, unsigned int path);
        bTreeNode findBro(bTreeNode& node);
        void cleanNode(bTreeNode& node);
        void printTree();
        void bfs(bTreeNode& b, std::vector<bTreeNode>& t);
};

#endif
