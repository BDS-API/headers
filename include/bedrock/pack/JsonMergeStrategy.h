#pragma once

#include <string>
#include "../../unmapped/LoadedResourceData.h"
#include "../../json/Value.h"
#include <functional>
#include <vector>
#include "ResourcePackMergeStrategy.h"


class JsonMergeStrategy : ResourcePackMergeStrategy {

public:
    virtual void mergeFiles(std::vector<LoadedResourceData> const&);
    virtual void _preMergeTransform(Json::Value &);
    ~JsonMergeStrategy();
    void _recursiveMerge(Json::Value &, Json::Value const&);
    JsonMergeStrategy(std::string const&, Json::Value &, std::function<bool (Json::Value &, Json::Value const&)> const&);
};
