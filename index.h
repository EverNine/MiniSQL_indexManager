#ifndef INDEX_H
#define INDEX_H
#include <string>

using std::string;
enum indexType {NONE,INT,FLOAT,STRING};

class index{
    private:
        indexType type;
        int intVal;
        float floatVal;
        string stringVal;
        unsigned int tupleNo;
    public:
        index(){
            tupleNo=0;
            type=NONE;
        };
        void setTuple(unsigned int t){
            tupleNo = t;
        }
        index(int val){
            type=INT;
            intVal=val;
            tupleNo=0;
        };
        index(float val){
            type=FLOAT;
            floatVal=val;
            tupleNo=0;
        };
        index(string val){
            type=STRING;
            stringVal=val;
            tupleNo=0;
        };
        void init(int val){
            type=INT;
            intVal=val;
        };
        void init(float val){
            type=FLOAT;
            floatVal=val;
        };
        void init(string val){
            type=STRING;
            stringVal=val;
        };
        int getInt(){
            return intVal;
        }
        float getFloat(){
            return floatVal;
        }
        string getString(){
            return stringVal;
        }
        int getType(){
            return type;
        };
        unsigned int getTuple(){
            return tupleNo;
        }
        const bool operator==(const index& obj){
            switch(type)
            {
                case INT:
                    return intVal==obj.intVal;
                case FLOAT:
                    return floatVal==obj.floatVal;
                case STRING:
                    return stringVal==obj.stringVal;
            }
        };
        const bool operator<(const index& obj){
            switch(type)
            {
                case INT:
                    if(intVal==obj.intVal)
                        return tupleNo<obj.tupleNo;
                    return intVal<obj.intVal;
                case FLOAT:
                    if(floatVal==obj.floatVal)
                        return tupleNo<obj.tupleNo;
                    return floatVal<obj.floatVal;
                case STRING:
                    if(stringVal==obj.stringVal)
                        return tupleNo<obj.tupleNo;
                    return stringVal<obj.stringVal;
            }
        };
        const bool operator<=(const index& obj){
            
            switch(type)
            {
                case INT:
                    if(intVal==obj.intVal)
                        return tupleNo<=obj.tupleNo;
                    return intVal<=obj.intVal;
                case FLOAT:
                    if(floatVal==obj.floatVal)
                        return tupleNo<=obj.tupleNo;
                    return floatVal<=obj.floatVal;
                case STRING:
                    if(stringVal==obj.stringVal)
                        return tupleNo<=obj.tupleNo;
                    return stringVal<=obj.stringVal;
            }
        };
        const bool operator>(const index& obj){
            
            switch(type)
            {
                case INT:
                    if(intVal==obj.intVal)
                        return tupleNo>obj.tupleNo;
                    return intVal>obj.intVal;
                case FLOAT:
                    if(floatVal==obj.floatVal)
                        return tupleNo>obj.tupleNo;
                    return floatVal>obj.floatVal;
                case STRING:
                    if(stringVal==obj.stringVal)
                        return tupleNo>obj.tupleNo;
                    return stringVal>obj.stringVal;
            }
        };
        const bool operator>=(const index& obj){
            switch(type)
            {
                case INT:
                    if(intVal==obj.intVal)
                        return tupleNo>=obj.tupleNo;
                    return intVal>=obj.intVal;
                case FLOAT:
                    if(floatVal==obj.floatVal)
                        return tupleNo>=obj.tupleNo;
                    return floatVal>=obj.floatVal;
                case STRING:
                    if(stringVal==obj.stringVal)
                        return tupleNo>=obj.tupleNo;
                    return stringVal>=obj.stringVal;
            }
        };
        const bool operator!=(const index& obj){
            switch(type)
            {
                case INT:
                    return intVal!=obj.intVal;
                case FLOAT:
                    return floatVal!=obj.floatVal;
                case STRING:
                    return stringVal!=obj.stringVal;
            }
        };
};

#endif
