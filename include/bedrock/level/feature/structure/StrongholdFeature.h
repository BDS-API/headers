#pragma once

#include <vector>
#include "StructureFeature.h"


class StrongholdFeature : StructureFeature {

public:
    class StrongholdResult;

    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void getGuesstimatedFeaturePositions();
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    ~StrongholdFeature();
    StrongholdFeature(VillageFeature *, unsigned int);
    void _isBeyondMinimumDistance(ChunkPos const&);
    void _generateStronghold(unsigned int, ChunkPos const&);
    void _closestChunkPos(ChunkPos const&, std::vector<StrongholdFeature::StrongholdResult> &);
//  void _isPregeneratedStrongholdHere(GridPos const&, ChunkPos &); //TODO: incomplete function definition
    void _getNearestStronghold(unsigned int, BlockPos const&, BlockPos &);
    void _getCenterOfGrid(ChunkPos const&);
    void _hasAdditionalStronghold(unsigned int, Random &, ChunkPos const&);
    void generatePositions(Random &, BiomeSource const&, unsigned int);
    void _logStrongholdData(std::vector<StrongholdFeature::StrongholdResult> const&);
    void _getGridCoordinates(ChunkPos const&);
    void _hasStrongholds(std::vector<StrongholdFeature::StrongholdResult> const&);
//  void _sameGrid(GridPos const&, GridPos const&); //TODO: incomplete function definition
    class StrongholdResult {

    public:
        StrongholdResult();
    };
};
