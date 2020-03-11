#pragma once

#include "../../unmapped/LoadedResourceData.h"
#include "../../core/Path.h"
#include <memory>
#include "./ResourcePackMergeStrategy.h"
#include <vector>
#include "../../json/Value.h"


class BiomeRegistryMergeStrategy : ResourcePackMergeStrategy {

public:
    virtual ~BiomeRegistryMergeStrategy();
    virtual void mergeFiles(std::vector<LoadedResourceData, std::allocator<LoadedResourceData>> const&);

    BiomeRegistryMergeStrategy(Core::Path const&, Json::Value &);
};
