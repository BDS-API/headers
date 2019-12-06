#pragma once

class BehaviorData {

public:

    void BehaviorData(BehaviorData&&);
    void BehaviorData(void);
    bool hasData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    bool hasDataOfType(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, BehaviorData::DataType)const;
    void reset(void);
    void copyData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, BehaviorData&);
    void pushToStack(std::unique_ptr<BehaviorData::DataProxy, std::default_delete<BehaviorData::DataProxy>>);
    void popFromStack(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
