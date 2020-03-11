#pragma once

#include "../json/Value.h"
#include "../bedrock/block/unmapped/BlockPalette.h"


class FlatWorldGeneratorOptions {

public:

    ~FlatWorldGeneratorOptions();
    void getDefault();
    void _load(Json::Value const&, BlockPalette const&);
    FlatWorldGeneratorOptions(Json::Value const&, BlockPalette const&);
};
