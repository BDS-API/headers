#pragma once



class FlatWorldGeneratorOptions {

public:
    ~FlatWorldGeneratorOptions(); // _ZN25FlatWorldGeneratorOptionsD2Ev
    void getDefault(); // _ZN25FlatWorldGeneratorOptions10getDefaultEv
    void _load(Json::Value const&, BlockPalette const&); // _ZN25FlatWorldGeneratorOptions5_loadERKN4Json5ValueERK12BlockPalette
    FlatWorldGeneratorOptions(Json::Value const&, BlockPalette const&); // _ZN25FlatWorldGeneratorOptionsC2ERKN4Json5ValueERK12BlockPalette
};
