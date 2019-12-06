#pragma once

class EndCityFeature : StructureFeature {

public:
    virtual ~EndCityFeature();
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos&);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    void EndCityFeature(TheEndGenerator &, unsigned int &);
};
