#pragma once

#include "ResourcePackMergeStrategy.h"
#include <vector>


class BiomeRegistryMergeStrategy : ResourcePackMergeStrategy {

public:
    ~BiomeRegistryMergeStrategy(); // _ZN26BiomeRegistryMergeStrategyD2Ev
    virtual void mergeFiles(std::vector<LoadedResourceData> const&); // _ZN26BiomeRegistryMergeStrategy10mergeFilesERKSt6vectorI18LoadedResourceDataSaIS1_EE
    BiomeRegistryMergeStrategy(Core::Path const&, Json::Value &); // _ZN26BiomeRegistryMergeStrategyC2ERKN4Core4PathERN4Json5ValueE
};
