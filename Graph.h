#include <iostream>
#include <vector>
#include <map>

typedef size_t weight;

const weight INFINITE = -1;

using namespace std;

class edge
{
public:
    weight w;   //边的权值
    int nextnode;   //下条边所对应的节点
    edge(const int& nextnode1, const weight& w1):nextnode(nextnode1),w(w1){}    //初始化函数
};

class vertex
{
public:
    vector<edge> adjnode;
    vertex(const size_t& size){
        adjnode.resize(size);
    }
};

class Graph
{
public:
    Graph(size_t size1):size(size1){
        data.resize(size);
    }   //初始化函数，必须有图的大小;
public:
    void addnode(const string& namea, const string& nameb, const weight& w);    //没有则创建点，无论有无点有加邻边;
private:
    vector<string> vname1;  //下标所对应的名字;
    map<string, int> vname;   //点对应的名字所对应的下标;
    vector<vertex> data;    //数据名;
    size_t size;    //记录图的大小;
private:
};
