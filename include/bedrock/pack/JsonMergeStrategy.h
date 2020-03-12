#pragma once

#include <string>
#include "ResourcePackMergeStrategy.h"
#include <vector>
#include <functional>


class JsonMergeStrategy : ResourcePackMergeStrategy {

public:
    ~JsonMergeStrategy();
    virtual void mergeFiles(std::vector<LoadedResourceData> const&);
    virtual void _preMergeTransform(Json::Value &);
    void _recursiveMerge(Json::Value &, Json::Value const&);
    JsonMergeStrategy(std::string const&, Json::Value &, std::function<bool (Json::Value &, Json::Value const&)> const&);
};
