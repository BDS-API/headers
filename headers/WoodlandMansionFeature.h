#pragma once

class WoodlandMansionFeature : StructureFeature {

public:
    virtual ~WoodlandMansionFeature();
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos&);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    void WoodlandMansionFeature(OverworldGenerator &, unsigned int);
};
