#pragma once

#include <memory>
#include <string>


class BehaviorData {

public:
    class DataProxy;

    bool hasData(std::string const&)const;
    BehaviorData();
    BehaviorData(BehaviorData &&);
//  bool hasDataOfType(std::string const&, BehaviorData::DataType)const; //TODO: incomplete function definition
    void reset();
    ~BehaviorData();
    void copyData(std::string const&, std::string const&, BehaviorData &);
    void pushToStack(std::unique_ptr<BehaviorData::DataProxy>);
    void popFromStack(std::string const&);
    class DataProxy {

    public:
        ~DataProxy();
//      DataProxy(std::string const&, BehaviorData::DataType); //TODO: incomplete function definition
    };
};
