#pragma once

class EndCityFeature : StructureFeature {

public:
    virtual EndCityFeature::~EndCityFeature();
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos&);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    EndCityFeature(TheEndGenerator &, unsigned int &);
};
