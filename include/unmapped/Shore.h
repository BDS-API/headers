#pragma once



namespace LayerFilters {

    class Shore {

    public:
        ~Shore();
//      void operator()(LayerDetails::NeighborhoodReader<Biome *, 1u, 1u> &, LayerDetails::RandomProviderTconst::{lambda(long<LayerDetails::LayerBase::initRandom(long, long> &, unsigned int)const; //TODO: incomplete function definition
        void _isOcean(Biome &)const;
        Shore(BiomeRegistry const&, Biome &);
    };
}
