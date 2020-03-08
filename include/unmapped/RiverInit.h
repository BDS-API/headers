#pragma once



using namespace LayerFilters;

class RiverInit {

public:

    RiverInit(BiomeRegistry const&);
    void operator()const;
};
