#include "bTree.h"
#include "indexManager.h"

int main(){
    //bTree a("abc");
    //index i(6);
    //i.setTuple((int)10);
    //a.insertIndex(i);
    //i = index(9);
    //i.setTuple((int)7);
    //a.insertIndex(i);
    //i = index(100);
    //i.setTuple((int)100);
    //a.insertIndex(i);
    //i = index(101);
    //i.setTuple((int)101);
    //a.insertIndex(i);
    //i = index(9);
    //i.setTuple((int)102);
    //a.insertIndex(i);

    ////a.printTree();

    //i = index(15);
    //i.setTuple((int)103);
    //a.insertIndex(i);


    //i = index(9);
    //i = index(21);
    //i.setTuple((int)104);
    //a.insertIndex(i);
    //i = index(9);
    //i.setTuple((int)105);
    //a.insertIndex(i);
    //i = index(9);
    //i.setTuple((int)106);
    //a.insertIndex(i);
    //i = index(9);
    //i.setTuple((int)107);
    //a.insertIndex(i);
    //i = index(9);
    //i.setTuple((int)108);
    //a.insertIndex(i);

    //i = index(1);
    //i.setTuple(4);
    //a.deleteIndex(i);
    //i = index(2);
    //i.setTuple(7);
    //a.deleteIndex(i);
    //i = index(3);
    //i.setTuple(5);
    //a.deleteIndex(i);
    //i = index(4);
    //i.setTuple(3);
    //a.deleteIndex(i);
    //i = index(1);
    //i.setTuple(4);
    //a.deleteIndex(i);
    //i = index(2);
    //i.setTuple(7);
    //a.deleteIndex(i);
    //i = index(100);
    //i.setTuple(100);
    //a.deleteIndex(i);
    //i = index(15);
    //i.setTuple(103);
    //a.deleteIndex(i);
    //i = index(21);
    //i.setTuple(104);
    //a.deleteIndex(i);
    //i = index(5);
    //i.setTuple(2);
    //a.deleteIndex(i);
    //i = index(6);
    //i.setTuple(10);
    //a.deleteIndex(i);
    //i = index(9);
    //i.setTuple(107);
    //a.deleteIndex(i);
    //i = index(9);
    //i.setTuple(102);
    //a.deleteIndex(i);
    //i = index(9);
    //i.setTuple(108);
    //a.deleteIndex(i);
    //i = index(9);
    //i.setTuple(7);
    //a.deleteIndex(i);
    //i = index(9);
    //i.setTuple(7);
    //a.deleteIndex(i);
    //i = index(101);
    //i.setTuple(101);
    //a.deleteIndex(i);
    //i = index(9);
    //i.setTuple(105);
    //a.deleteIndex(i);
    //i = index(9);
    //i.setTuple(106);
    //a.deleteIndex(i);
    //i = index(9);
    //i.setTuple(106);
    //a.deleteIndex(i);

    //i = index(9);
    //i.setTuple(106);
    //a.insertIndex(i);

    //i = index(9);
    //i.setTuple(105);
    //a.insertIndex(i);
    //i = index(9);
    //i.setTuple(102);
    //a.insertIndex(i);
    //i = index(9);
    //i.setTuple(8);
    //a.insertIndex(i);
    ////i = index(9);
    ////i.setTuple(106);
    ////a.insertIndex(i);
    ////a.printTree();
    ////i = index(6);

    ////std::vector<unsigned int> b = a.findAll(i);
    ////for (int k = 0; k < b.size(); ++k)
    ////{
        ////std::cout<<b[k]<<std::endl;
    ////}


    //a.printTree();
    std::vector<unsigned int> res;
    
    buffer bf;
    IndexManager im(bf);

    im.create("abc.index",INT,0);
    Index id(10);
    id.setTuple(1);
    im.insert("abc.index",id);
    res = im.find("abc.index",id);
    int i;
    for (i = 0; i < res.size(); ++i)
    {
        std::cout<<res[i]<<std::endl;
    }

    return 0;
}
