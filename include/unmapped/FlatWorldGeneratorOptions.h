#pragma once

#include "../json/Value"


class FlatWorldGeneratorOptions {

public:

    void getDefault(void);
    void _load(Json::Value const&, BlockPalette const&);
    FlatWorldGeneratorOptions(Json::Value const&, BlockPalette const&);
};
