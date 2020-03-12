#pragma once

#include "ResourcePackMergeStrategy.h"
#include <vector>


class BiomeRegistryMergeStrategy : ResourcePackMergeStrategy {

public:
    ~BiomeRegistryMergeStrategy();
    virtual void mergeFiles(std::vector<LoadedResourceData> const&);
    BiomeRegistryMergeStrategy(Core::Path const&, Json::Value &);
};
