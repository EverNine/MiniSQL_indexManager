#include "bTree.h"
#include "indexManager.h"

int main(){
    std::vector<unsigned int> res;
    
    buffer bf; //创建缓存管理器
    IndexManager im(bf); //创建索引管理器

    //bf.createNewFile("a");
    //int n =bf.addNewBlock("a");
    //std::cout<<std::hex<<n<<std::endl;
    //BYTE* p =bf.getoffsetBlockAddress("a",n);
    //std::cout<<p<<std::endl;
    //n =bf.addNewBlock("a");
    //std::cout<<n<<std::endl;
    //p =bf.getoffsetBlockAddress("a",n);
    //std::cout<<std::hex<<p<<std::endl;

    //im.create("abc_index",INT,0); //创建名为abc_index的索引文件，索引类型为整型

    int i;
    //for (i = 0; i < 10; ++i)
    //{
        //Index id(10);  //创建索引值为10的索引
        
        //id.setTuple(i);  //设定索引对应元组序号为 i ,插入与删除索引时此步为必须
        //im.setIndex(INT,0);  //设定索引类型，重要！！当插入与删除索引时务必调用此函数
        //im.insert("abc_index",id);  //向abc_index文件中插入新的索引id
    //}
    Index id(10);  //创建索引值为10的索引，此处不需要setTuple
    //id = Index(10);
    //id.setTuple(5);
    //im.del("abc_index",id);  //删除索引，参数与插入相同

    im.setIndex(INT,0);  //设定索引类型，重要！！当插入与删除索引时务必调用此函数
    //res = im.find("abc_index",id);  //查找索引值为id的元组
    res = im.findLess("abc_index",id,true); //查找abc_index索引文件中小于等于id的的所有元组的序号
    std::cout<<"查找结果:";
    for (i = 0; i < res.size(); ++i)
    {
        std::cout<<res[i]<<' ';  //输出所有索引值为id的元组的序号
    }
    std::cout<<endl;
    im.print("abc_index");  //输出B+树，仅供测试用
    //im.drop("abc_index");  //删除索引文件

    std::cout<<endl;
    std::cout<<"end"<<std::endl;
    return 0;
}
