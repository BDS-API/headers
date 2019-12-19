#pragma once

class BiomeRegistryMergeStrategy : ResourcePackMergeStrategy {

public:
    virtual BiomeRegistryMergeStrategy::~BiomeRegistryMergeStrategy();
    virtual void mergeFiles(std::vector<LoadedResourceData, std::allocator<LoadedResourceData>> const&);

    BiomeRegistryMergeStrategy(Core::Path const&, Json::Value &);
};
