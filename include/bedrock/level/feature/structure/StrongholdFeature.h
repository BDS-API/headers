#pragma once

#include "../../../util/Random"
#include "../../../../unmapped/Dimension"
#include "../../../../unmapped/StrongholdResult"
#include "../../../util/BlockPos"
#include "../../../util/ChunkPos"
#include "../../../../unmapped/BiomeSource"


class StrongholdFeature : StructureFeature {

public:
    virtual StrongholdFeature::~StrongholdFeature()
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos&);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    virtual void getGuesstimatedFeaturePositions();

    StrongholdFeature(VillageFeature *, unsigned int);
    void generatePositions(Random &, BiomeSource const&, unsigned int);
    void _hasAdditionalStronghold(unsigned int, Random &, ChunkPos const&);
    void _getNearestStronghold(unsigned int, BlockPos const&, BlockPos&);
    void _isBeyondMinimumDistance(ChunkPos const&);
    void _generateStronghold(unsigned int, ChunkPos const&);
    void _getCenterOfGrid(ChunkPos const&);
    void _getGridCoordinates(ChunkPos const&);
    void _isPregeneratedStrongholdHere(GridPos const&, ChunkPos &);
    void _hasStrongholds(std::vector<StrongholdFeature::StrongholdResult, std::allocator<StrongholdFeature::StrongholdResult>> const&);
    void _closestChunkPos(ChunkPos const&, std::vector<StrongholdFeature::StrongholdResult, std::allocator<StrongholdFeature::StrongholdResult>> &);
    void _sameGrid(GridPos const&, GridPos const&);
    void _logStrongholdData(std::vector<StrongholdFeature::StrongholdResult, std::allocator<StrongholdFeature::StrongholdResult>> const&);
};
