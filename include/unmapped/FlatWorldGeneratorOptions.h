#pragma once

#include "../bedrock/block/unmapped/BlockPalette"
#include "../json/Value"


class FlatWorldGeneratorOptions {

public:

    void getDefault();
    void _load(Json::Value const&, BlockPalette const&);
    FlatWorldGeneratorOptions(Json::Value const&, BlockPalette const&);
};
