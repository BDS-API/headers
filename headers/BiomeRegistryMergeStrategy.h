#pragma once

class BiomeRegistryMergeStrategy : ResourcePackMergeStrategy {

public:
    virtual ~BiomeRegistryMergeStrategy();
    virtual void mergeFiles(std::vector<LoadedResourceData, std::allocator<LoadedResourceData>> const&);

    void BiomeRegistryMergeStrategy(Core::Path const&, Json::Value &);
};
