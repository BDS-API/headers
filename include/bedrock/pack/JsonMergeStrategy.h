#pragma once

#include "../../unmapped/LoadedResourceData"
#include "../../json/Value"


class JsonMergeStrategy : ResourcePackMergeStrategy {

public:
    virtual JsonMergeStrategy::~JsonMergeStrategy();
    virtual void mergeFiles(std::vector<LoadedResourceData, std::allocator<LoadedResourceData>> const&);
    virtual void _preMergeTransform(Json::Value &);

    JsonMergeStrategy(std::string const&, Json::Value &, std::function<bool ()(Json::Value &, Json::Value const&)> const&);
    void _recursiveMerge(Json::Value &, Json::Value const&);
};
