#pragma once

class LayerFilters::AddEdgeCoolWarm {

public:

    void operator()(LayerDetails::NeighborhoodReader<LayerValues::PreBiome, 1u, 1u> &)const;
};
