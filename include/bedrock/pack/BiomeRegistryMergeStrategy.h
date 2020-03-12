#pragma once

#include "../../core/Path.h"
#include "../../unmapped/LoadedResourceData.h"
#include "../../json/Value.h"
#include <vector>
#include "ResourcePackMergeStrategy.h"


class BiomeRegistryMergeStrategy : ResourcePackMergeStrategy {

public:
    ~BiomeRegistryMergeStrategy();
    virtual void mergeFiles(std::vector<LoadedResourceData> const&);
    BiomeRegistryMergeStrategy(Core::Path const&, Json::Value &);
};
