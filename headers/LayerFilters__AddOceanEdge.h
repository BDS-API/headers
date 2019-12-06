#pragma once

class LayerFilters::AddOceanEdge {

public:

    void operator()(LayerDetails::NeighborhoodReader<BiomeTemperatureCategory, 1u, 1u> &)const;
};
