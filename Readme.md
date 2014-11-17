#Index类说明
##类定义
    enum indexType {NONE,INT,FLOAT,STRING};
    class index{
        private:
            indexType type;
            int intVal;
            float floatVal;
            string stringVal;
            unsigned int tupleNo;
        public:
            index();
            void setTuple(unsigned int t);
            index(int val);
            index(float val);
            index(string val);
            void init(int val)；
            void init(float val);
            void init(string val);
    };


##成员函数
###index(Null/int/string/float val);
构造函数，val为索引值
###init(int/string/float val);
初始化函数,当已经使用上面的构造函数传入索引值时不需要调用此方法
###setTuple(unsigned int t);
设置元组位置，t为该元组在表中的位置，当更新索引时必须使用此方法确定唯一索引。


#IndexManager类说明
##类定义
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
            std::vector<unsigned int> findLess(string indexName,index ind,bool equal);
            std::vector<unsigned int> findGreater(string indexName,index ind,bool equal);
            void setIndex(indexType it, int length);
    };


##成员函数
###IndexManager(bufferManager& bm);
构造函数，使用bm变量传入所使用的缓存管理器。此时内部缓存缺省最大值为200。
###IndexManager(bufferManager& bm, int max);
构造函数，使用bm变量传入所使用的缓存管理器，max为内部缓存最大值。
###void setBufferSize(int max);
设置内部缓存大小。
###std::vector<unsigned int\> find(string indexName,index ind);
利用索引文件查找，indexName为索引名，ind为查找的索引。
###std::vector<unsigned int\> findLess(string indexName,index ind,bool equal);
查找索引小于ind的元组，当equal为true时表示查找小于等于
###std::vector<unsigned int\> findGreater(string indexName,index ind,bool equal);
查找索引大于ind的元组，当equal为true时表示查找大于等于
###void insert(string indexName,index ind);
插入新的元组时调用此方法更新索引，此处的ind必须使用setTuple方法设定其元组位置。
###void del(string indexName,index ind);
删除元组时调用此方法更新索引，此处的ind必须使用setTuple方法设定其元组位置。
###void create(string indexName,indexType it,int length);
创建新的索引,it为索引类型，length为长度(仅在索引类型为char时有效)
###void drop(string indexName);
删除索引文件
###void IndexManager::setIndex(indexType it, int length){
设置索引类型，在每次进行查找、插入、删除操作前必须调用此函数确定索引类型，length仅在类型为STRING时有效。
