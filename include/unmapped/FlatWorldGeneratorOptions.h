#pragma once

#include "../json/Value"
#include "../bedrock/block/unmapped/BlockPalette"


class FlatWorldGeneratorOptions {

public:

    void getDefault();
    void _load(Json::Value const&, BlockPalette const&);
    FlatWorldGeneratorOptions(Json::Value const&, BlockPalette const&);
};
