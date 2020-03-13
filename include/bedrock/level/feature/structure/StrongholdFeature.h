#pragma once

#include "StructureFeature.h"
#include <vector>


class StrongholdFeature : StructureFeature {

public:
    class StrongholdResult;

    ~StrongholdFeature(); // _ZN17StrongholdFeatureD2Ev
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &); // _ZN17StrongholdFeature26getNearestGeneratedFeatureER9DimensionR11BiomeSourceRK8BlockPosRS4_
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int); // _ZN17StrongholdFeature14isFeatureChunkERK11BiomeSourceR6RandomRK8ChunkPosj
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&); // _ZN17StrongholdFeature20createStructureStartER9DimensionR11BiomeSourceR6RandomRK8ChunkPos
    virtual void getGuesstimatedFeaturePositions(); // _ZN17StrongholdFeature31getGuesstimatedFeaturePositionsEv
    StrongholdFeature(VillageFeature *, unsigned int); // _ZN17StrongholdFeatureC2EP14VillageFeaturej
    void generatePositions(Random &, BiomeSource const&, unsigned int); // _ZN17StrongholdFeature17generatePositionsER6RandomRK11BiomeSourcej
    void _hasAdditionalStronghold(unsigned int, Random &, ChunkPos const&); // _ZN17StrongholdFeature24_hasAdditionalStrongholdEjR6RandomRK8ChunkPos
    void _getNearestStronghold(unsigned int, BlockPos const&, BlockPos &); // _ZN17StrongholdFeature21_getNearestStrongholdEjRK8BlockPosRS0_
    void _isBeyondMinimumDistance(ChunkPos const&); // _ZN17StrongholdFeature24_isBeyondMinimumDistanceERK8ChunkPos
    void _generateStronghold(unsigned int, ChunkPos const&); // _ZN17StrongholdFeature19_generateStrongholdEjRK8ChunkPos
    void _getCenterOfGrid(ChunkPos const&); // _ZN17StrongholdFeature16_getCenterOfGridERK8ChunkPos
    void _getGridCoordinates(ChunkPos const&); // _ZN17StrongholdFeature19_getGridCoordinatesERK8ChunkPos
//  void _isPregeneratedStrongholdHere(GridPos const&, ChunkPos &); //TODO: incomplete function definition // _ZN17StrongholdFeature29_isPregeneratedStrongholdHereERK7GridPosR8ChunkPos
    void _hasStrongholds(std::vector<StrongholdFeature::StrongholdResult> const&); // _ZN17StrongholdFeature15_hasStrongholdsERKSt6vectorINS_16StrongholdResultESaIS1_EE
    void _closestChunkPos(ChunkPos const&, std::vector<StrongholdFeature::StrongholdResult> &); // _ZN17StrongholdFeature16_closestChunkPosERK8ChunkPosRSt6vectorINS_16StrongholdResultESaIS4_EE
//  void _sameGrid(GridPos const&, GridPos const&); //TODO: incomplete function definition // _ZN17StrongholdFeature9_sameGridERK7GridPosS2_
    void _logStrongholdData(std::vector<StrongholdFeature::StrongholdResult> const&); // _ZN17StrongholdFeature18_logStrongholdDataERKSt6vectorINS_16StrongholdResultESaIS1_EE
    class StrongholdResult {

    public:
        StrongholdResult(); // _ZN17StrongholdFeature16StrongholdResultC2Ev
    };
};
