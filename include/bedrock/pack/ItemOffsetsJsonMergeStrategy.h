#pragma once

class ItemOffsetsJsonMergeStrategy : ResourcePackMergeStrategy {

public:
    virtual ItemOffsetsJsonMergeStrategy::~ItemOffsetsJsonMergeStrategy();
    virtual void mergeFiles(std::vector<LoadedResourceData, std::allocator<LoadedResourceData>> const&);

    ItemOffsetsJsonMergeStrategy(std::string const&, Json::Value &, std::function<bool ()(Json::Value &, Json::Value const&)> const&);
};
