#pragma once

#include "./BehaviorData.h"
#include <memory>
#include "./DataProxy.h"
#include <string>


class BehaviorData {

public:

    ~BehaviorData();
    BehaviorData(BehaviorData &&);
    BehaviorData();
    bool hasData(std::string const&)const;
//  bool hasDataOfType(std::string const&, BehaviorData::DataType)const; //TODO: incomplete function definition
    void reset();
    void copyData(std::string const&, std::string const&, BehaviorData &);
    void pushToStack(std::unique_ptr<BehaviorData::DataProxy, std::default_delete<BehaviorData::DataProxy>>);
    void popFromStack(std::string const&);
};
