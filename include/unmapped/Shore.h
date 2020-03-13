#pragma once



namespace LayerFilters {

    class Shore {

    public:
        ~Shore(); // _ZN12LayerFilters5ShoreD2Ev
        Shore(BiomeRegistry const&, Biome &); // _ZN12LayerFilters5ShoreC2ERK13BiomeRegistryR5Biome
//      void operator()(LayerDetails::NeighborhoodReader<Biome *, 1u, 1u> &, LayerDetails::RandomProviderTconst::{lambda(long<LayerDetails::LayerBase::initRandom(long, long> &, unsigned int)const; //TODO: incomplete function definition // _ZNK12LayerFilters5ShoreclERN12LayerDetails18NeighborhoodReaderIP5BiomeLj1ELj1EEENS1_15RandomProviderTIZNKS1_9LayerBase10initRandomEllEUlRljE_EE
        void _isOcean(Biome &)const; // _ZNK12LayerFilters5Shore8_isOceanER5Biome
    };
}
