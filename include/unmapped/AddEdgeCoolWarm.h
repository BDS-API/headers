#pragma once



using namespace LayerFilters;

class AddEdgeCoolWarm {

public:

    void operator()(LayerDetails::NeighborhoodReader<LayerValues::PreBiome, 1u, 1u> &)const;
};
