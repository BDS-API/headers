#pragma once



namespace LayerFilters {

    class AddBiomeIsland {

    public:
        void _isShallowOcean(Biome const&)const;
        AddBiomeIsland(BiomeRegistry const&, Biome &, Biome &);
//      void operator()(LayerDetails::NeighborhoodReader<Biome *, 1u, 1u> &, LayerDetails::RandomProviderTconst::{lambda(long<LayerDetails::LayerBase::initRandom(long, long> &, unsigned int)const; //TODO: incomplete function definition
        ~AddBiomeIsland();
    };
}
