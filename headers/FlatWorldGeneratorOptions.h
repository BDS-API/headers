#pragma once

class FlatWorldGeneratorOptions {

public:

    void getDefault(void);
    void _load(Json::Value const&, BlockPalette const&);
    void FlatWorldGeneratorOptions(Json::Value const&, BlockPalette const&);
};
