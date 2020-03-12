#pragma once



class FlatWorldGeneratorOptions {

public:
    void _load(Json::Value const&, BlockPalette const&);
    void getDefault();
    ~FlatWorldGeneratorOptions();
    FlatWorldGeneratorOptions(Json::Value const&, BlockPalette const&);
};
