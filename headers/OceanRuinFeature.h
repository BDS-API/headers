#pragma once

class OceanRuinFeature : StructureFeature {

public:
    virtual ~OceanRuinFeature();
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos&);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    void OceanRuinFeature(OverworldGenerator &, OceanMonumentFeature &, unsigned int);
};
