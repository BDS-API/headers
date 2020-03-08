#pragma once



using namespace BehaviorData;

class DataProxy {

public:
    virtual BehaviorData::DataProxy::~DataProxy()

    DataProxy(std::string const&, BehaviorData::DataType);
};
