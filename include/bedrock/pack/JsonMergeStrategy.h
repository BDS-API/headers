#pragma once

#include "../../unmapped/LoadedResourceData.h"
#include <memory>
#include "./ResourcePackMergeStrategy.h"
#include <vector>
#include "../../json/Value.h"
#include <functional>
#include <string>


class JsonMergeStrategy : ResourcePackMergeStrategy {

public:
    virtual ~JsonMergeStrategy();
    virtual void mergeFiles(std::vector<LoadedResourceData, std::allocator<LoadedResourceData>> const&);
    virtual void _preMergeTransform(Json::Value &);

    JsonMergeStrategy(std::string const&, Json::Value &, std::function<bool (Json::Value &, Json::Value const&)> const&);
    void _recursiveMerge(Json::Value &, Json::Value const&);
};
