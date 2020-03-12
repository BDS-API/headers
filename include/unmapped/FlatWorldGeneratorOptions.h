#pragma once

#include "../bedrock/block/unmapped/BlockPalette.h"
#include "../json/Value.h"


class FlatWorldGeneratorOptions {

public:
    ~FlatWorldGeneratorOptions();
    FlatWorldGeneratorOptions(Json::Value const&, BlockPalette const&);
    void _load(Json::Value const&, BlockPalette const&);
    void getDefault();
};
