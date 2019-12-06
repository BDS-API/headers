#pragma once

class BehaviorData::DataProxy {

public:
    virtual ~DataProxy();

    void DataProxy(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, BehaviorData::DataType);
};
