#pragma once

#include "../../unmapped/LoadedResourceData.h"
#include <memory>
#include "./ResourcePackMergeStrategy.h"
#include <vector>
#include "../../json/Value.h"
#include <functional>
#include <string>


class ItemOffsetsJsonMergeStrategy : ResourcePackMergeStrategy {

public:
    virtual ~ItemOffsetsJsonMergeStrategy();
    virtual void mergeFiles(std::vector<LoadedResourceData, std::allocator<LoadedResourceData>> const&);

    ItemOffsetsJsonMergeStrategy(std::string const&, Json::Value &, std::function<bool (Json::Value &, Json::Value const&)> const&);
};
