#pragma once

#include <string>
#include "ResourcePackMergeStrategy.h"
#include <vector>
#include <functional>


class ItemOffsetsJsonMergeStrategy : ResourcePackMergeStrategy {

public:
    ~ItemOffsetsJsonMergeStrategy();
    virtual void mergeFiles(std::vector<LoadedResourceData> const&);
    ItemOffsetsJsonMergeStrategy(std::string const&, Json::Value &, std::function<bool (Json::Value &, Json::Value const&)> const&);
};
