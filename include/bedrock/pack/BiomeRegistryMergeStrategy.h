#pragma once

#include "../../core/Path"
#include "../../json/Value"
#include "../../unmapped/LoadedResourceData"


class BiomeRegistryMergeStrategy : ResourcePackMergeStrategy {

public:
    BiomeRegistryMergeStrategy::~BiomeRegistryMergeStrategy()
    virtual void mergeFiles(std::vector<LoadedResourceData, std::allocator<LoadedResourceData>> const&);

    BiomeRegistryMergeStrategy(Core::Path const&, Json::Value &);
};
