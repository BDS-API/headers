#pragma once

class ItemOffsetsJsonMergeStrategy : ResourcePackMergeStrategy {

public:
    virtual ~ItemOffsetsJsonMergeStrategy();
    virtual void mergeFiles(std::vector<LoadedResourceData, std::allocator<LoadedResourceData>> const&);

    void ItemOffsetsJsonMergeStrategy(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Value &, std::function<bool ()(Json::Value &, Json::Value const&)> const&);
};
