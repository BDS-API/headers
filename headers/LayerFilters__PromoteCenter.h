#pragma once

class LayerFilters::PromoteCenter {

public:

    void PromoteCenter(Biome &, Biome &);
    void operator()(LayerDetails::NeighborhoodReader<Biome *, 1u, 1u> &)const;
};
