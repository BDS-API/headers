#pragma once



namespace LayerFilters {

    class AddBiomeIsland {

    public:
        ~AddBiomeIsland(); // _ZN12LayerFilters14AddBiomeIslandD2Ev
        AddBiomeIsland(BiomeRegistry const&, Biome &, Biome &); // _ZN12LayerFilters14AddBiomeIslandC2ERK13BiomeRegistryR5BiomeS5_
//      void operator()(LayerDetails::NeighborhoodReader<Biome *, 1u, 1u> &, LayerDetails::RandomProviderTconst::{lambda(long<LayerDetails::LayerBase::initRandom(long, long> &, unsigned int)const; //TODO: incomplete function definition // _ZNK12LayerFilters14AddBiomeIslandclERN12LayerDetails18NeighborhoodReaderIP5BiomeLj1ELj1EEENS1_15RandomProviderTIZNKS1_9LayerBase10initRandomEllEUlRljE_EE
        void _isShallowOcean(Biome const&)const; // _ZNK12LayerFilters14AddBiomeIsland15_isShallowOceanERK5Biome
    };
}
