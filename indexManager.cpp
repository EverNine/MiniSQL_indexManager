#include "indexManager.h"

IndexManager::IndexManager(bufferManager& bm){
    bufferMax = 200;
    bfm = &bufferManager;
}

IndexManager::IndexManager(bufferManager& bm, int max){
    bufferMax = max;
    if(bufferMax<1)
        bufferMax = 1;
    bfm = &bufferManager;
}

void IndexManager::setBufferSize(int max){
    bufferMax = max;
    if(bufferMax<1)
        bufferMax = 1;
}

std::vector<unsigned int> IndexManager::find(string indexName,index ind){
    bTree t = findTree(indexName);
    return t.findAll(ind);
}

void IndexManager::insert(string indexName,index ind){
    bTree t = findTree(indexName);
    t.insertIndex(ind);
}

void IndexManager::del(string indexName,index ind){
    bTree t = findTree(indexName);
    t.deleteIndex(ind);
}

void IndexManager::create(string indexName, indexType it, int length){
    bTree t(indexName, it, length, bfm);
    buffer.push_back(bTree(indexName, it, length, bfm));
    if(buffer.size()>bufferMax)
        buffer.erase(buffer.begin());
}

void IndexManager::drop(string indexName){
}

bTree& IndexManager::findTree(string indexName){
    std::vector<bTree>::iterator iter;
    for (iter = buffer.begin(); iter < buffer.begin(); ++iter)
    {
        if(iter->getName()==indexName)
            return *iter;
    }
    buffer.push_back(bTree(indexName,bfm));
    if(buffer.size()>bufferMax)
        buffer.erase(buffer.begin());
    return buffer.back();
}
