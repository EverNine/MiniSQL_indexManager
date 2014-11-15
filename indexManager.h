#ifndef INDEXMANAGER_H
#define INDEXMANAGER_H
#include "bTree.h"

class IndexManager{
    private:
        std::vector<bTree> buffer;
        int bufferMax;
        bufferManager* bfm;

        bTree& findTree(string indexName);
    public:
        IndexManager(bufferManager& bm);
        IndexManager(bufferManager& bm, int max);
        void setBufferSize(int max);
        std::vector<unsigned int> find(string indexName,index ind);
        void insert(string indexName,index ind);
        void del(string indexName,index ind);
        void create(string indexName,indexType it,int length);
        void drop(string indexName);
};

#endif
