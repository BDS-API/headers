#pragma once

#include <string>
#include <memory>


class BehaviorData {

public:
    class DataProxy;

    BehaviorData();
    void pushToStack(std::unique_ptr<BehaviorData::DataProxy>);
    void copyData(std::string const&, std::string const&, BehaviorData &);
    void popFromStack(std::string const&);
    void reset();
    ~BehaviorData();
//  bool hasDataOfType(std::string const&, BehaviorData::DataType)const; //TODO: incomplete function definition
    BehaviorData(BehaviorData &&);
    bool hasData(std::string const&)const;
    class DataProxy {

    public:
        ~DataProxy();
//      DataProxy(std::string const&, BehaviorData::DataType); //TODO: incomplete function definition
    };
};
