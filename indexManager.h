#ifndef INDEXMANAGER_H
#define INDEXMANAGER_H
#include "bTree.h"

class IndexManager{
    private:
        std::vector<bTree> buffer;
        int bufferMax;
        bufferManager* bfm;
        indexType type;
        int charLength;

        bTree& findTree(string indexName);
    public:
        IndexManager(bufferManager& bm);
        IndexManager(bufferManager& bm, int max);
        void setIndex(indexType it, int length);
        void setBufferSize(int max);
        std::vector<unsigned int> find(string indexName,index ind);
        void insert(string indexName,index ind);
        void del(string indexName,index ind);
        void create(string indexName,indexType it,int length);
        void drop(string indexName);
        std::vector<unsigned int> findLess(string indexName,index ind,bool equal);
        std::vector<unsigned int> findGreater(string indexName,index ind,bool equal);
};

#endif
