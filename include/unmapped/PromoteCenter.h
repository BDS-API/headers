#pragma once



namespace LayerFilters {

    class PromoteCenter {

    public:
//      void operator()(LayerDetails::NeighborhoodReader<Biome *, 1u, 1u> &)const; //TODO: incomplete function definition
        PromoteCenter(Biome &, Biome &);
    };
}
