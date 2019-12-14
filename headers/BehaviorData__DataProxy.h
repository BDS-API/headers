#pragma once

class BehaviorData::DataProxy {

public:
    virtual ~DataProxy();

    void DataProxy(std::string const&, BehaviorData::DataType);
};
