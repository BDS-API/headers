#pragma once

class LayerFilters::AddEdgeHeatIce {

public:

    void operator()(LayerDetails::NeighborhoodReader<LayerValues::PreBiome, 1u, 1u> &)const;
};
