#include "bTree.h"
#include "indexManager.h"

int main(){
    std::vector<unsigned int> res;
    
    buffer bf; //创建缓存管理器
    IndexManager im(bf); //创建索引管理器

    im.create("abc_index",INT,0); //创建名为abc_index的索引文件，索引类型为整型
    int i;
    for (i = 0; i < 10; ++i)
    {
        Index id(10);  //创建索引值为10的索引
        id.setTuple(i);  //设定索引对应元组序号为 i ,插入与删除索引时此步为必须
        im.insert("abc_index",id);  //向abc_index文件中插入新的索引id
    }
    Index id(10);  //创建索引值为10的索引，此处不需要setTuple
    res = im.find("abc_index",id);  //查找索引值为id的元组
    for (i = 0; i < res.size(); ++i)
    {
        std::cout<<res[i]<<std::endl;  //输出所有索引值为id的元组的序号
    }

    return 0;
}
