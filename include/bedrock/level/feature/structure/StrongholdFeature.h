#pragma once

#include "./StructureFeature.h"
#include "../../../util/BlockPos.h"
#include "../../../../unmapped/StrongholdResult.h"
#include "../../../../unmapped/Dimension.h"
#include <memory>
#include "../../../util/Random.h"
#include "./VillageFeature.h"
#include <vector>
#include "../../../../unmapped/BiomeSource.h"
#include "../../../util/ChunkPos.h"


class StrongholdFeature : StructureFeature {

public:
    virtual ~StrongholdFeature();
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    virtual void getGuesstimatedFeaturePositions();

    StrongholdFeature(VillageFeature *, unsigned int);
    void generatePositions(Random &, BiomeSource const&, unsigned int);
    void _hasAdditionalStronghold(unsigned int, Random &, ChunkPos const&);
    void _getNearestStronghold(unsigned int, BlockPos const&, BlockPos &);
    void _isBeyondMinimumDistance(ChunkPos const&);
    void _generateStronghold(unsigned int, ChunkPos const&);
    void _getCenterOfGrid(ChunkPos const&);
    void _getGridCoordinates(ChunkPos const&);
//  void _isPregeneratedStrongholdHere(GridPos const&, ChunkPos &); //TODO: incomplete function definition
    void _hasStrongholds(std::vector<StrongholdFeature::StrongholdResult, std::allocator<StrongholdFeature::StrongholdResult>> const&);
    void _closestChunkPos(ChunkPos const&, std::vector<StrongholdFeature::StrongholdResult, std::allocator<StrongholdFeature::StrongholdResult>> &);
//  void _sameGrid(GridPos const&, GridPos const&); //TODO: incomplete function definition
    void _logStrongholdData(std::vector<StrongholdFeature::StrongholdResult, std::allocator<StrongholdFeature::StrongholdResult>> const&);
};
