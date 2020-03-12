#pragma once

#include "../../../util/ChunkPos.h"
#include "../../../../unmapped/BiomeSource.h"
#include "../../../../unmapped/Dimension.h"
#include "VillageFeature.h"
#include "../../../util/Random.h"
#include "../../../util/BlockPos.h"
#include <vector>
#include "StructureFeature.h"


class StrongholdFeature : StructureFeature {

public:
    class StrongholdResult;

    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    ~StrongholdFeature();
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    virtual void getGuesstimatedFeaturePositions();
    void _isBeyondMinimumDistance(ChunkPos const&);
    StrongholdFeature(VillageFeature *, unsigned int);
    void _closestChunkPos(ChunkPos const&, std::vector<StrongholdFeature::StrongholdResult> &);
    void _getCenterOfGrid(ChunkPos const&);
//  void _isPregeneratedStrongholdHere(GridPos const&, ChunkPos &); //TODO: incomplete function definition
    void _logStrongholdData(std::vector<StrongholdFeature::StrongholdResult> const&);
//  void _sameGrid(GridPos const&, GridPos const&); //TODO: incomplete function definition
    void _getNearestStronghold(unsigned int, BlockPos const&, BlockPos &);
    void _hasStrongholds(std::vector<StrongholdFeature::StrongholdResult> const&);
    void generatePositions(Random &, BiomeSource const&, unsigned int);
    void _hasAdditionalStronghold(unsigned int, Random &, ChunkPos const&);
    void _generateStronghold(unsigned int, ChunkPos const&);
    void _getGridCoordinates(ChunkPos const&);
    class StrongholdResult {

    public:
        StrongholdResult();
    };
};
