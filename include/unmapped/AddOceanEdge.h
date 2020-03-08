#pragma once



using namespace LayerFilters;

class AddOceanEdge {

public:

    void operator()(LayerDetails::NeighborhoodReader<BiomeTemperatureCategory, 1u, 1u> &)const;
};
