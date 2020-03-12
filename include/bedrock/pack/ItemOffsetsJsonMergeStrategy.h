#pragma once

#include <string>
#include "../../unmapped/LoadedResourceData.h"
#include "../../json/Value.h"
#include <functional>
#include <vector>
#include "ResourcePackMergeStrategy.h"


class ItemOffsetsJsonMergeStrategy : ResourcePackMergeStrategy {

public:
    ~ItemOffsetsJsonMergeStrategy();
    virtual void mergeFiles(std::vector<LoadedResourceData> const&);
    ItemOffsetsJsonMergeStrategy(std::string const&, Json::Value &, std::function<bool (Json::Value &, Json::Value const&)> const&);
};
