#pragma once

#include "../../../unmapped/Block.h"
#include "../../util/ChunkPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "SubChunkLightIndex.h"
#include "../../util/Pos.h"
#include "../../util/Brightness.h"
#include <vector>
#include "../../util/BlockPos.h"


class SubChunkRelighter {

public:
    static long mOuterEdgeOfComputationBits;
    static long mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits;
    static long sLitSpinLock;
    static long sDarkSpinLock;
    static long sFullyLitSubChunk;
    static long sFullyDarkSubChunk;

    void _getLightPair(SubChunkLightIndex)const;
    void computeAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits();
    void _dirtySubChunk(SubChunkLightIndex, unsigned int &);
    void getCentralSubchunkOrigin();
    SubChunkRelighter(BlockSource &, unsigned long, ChunkPos const&, bool, bool);
    void setBlockLight(Pos const&, Brightness, Brightness, Brightness, Brightness);
    void _getBlock(SubChunkLightIndex, Block const*&, Block const*&, unsigned int &)const;
    void computeOuterEdgeOfComputationBits();
    void getFullyLitSubChunk();
    void _setPropagatedSkyLightValue(SubChunkLightIndex, unsigned char);
//  void _resetToDo(SubChunkRelighter::SubChunkToDoBitsClearMode); //TODO: incomplete function definition
    void setSkyLight(Pos const&, Brightness, Brightness, Brightness, Brightness);
    void _getSubChunk(SubChunkLightIndex, unsigned int &);
    void _propagateSkyLight();
    void _getAbsorptionAndEmissiveness(SubChunkLightIndex, unsigned char &, unsigned char &)const;
    void update(BlockPos const&, unsigned long);
    void _propagateBlockLight();
    void _getLight(SubChunkLightIndex);
    void _propagateSubtractiveBlockLight();
    void _getBlock(SubChunkLightIndex, Block const*&, Block const*&)const;
    void _getAbsorptionAndEmissivenessAndSubChunkIndex(SubChunkLightIndex, unsigned char &, unsigned char &, unsigned int &)const;
    void _propagateSubtractiveSkyLight(SubChunkLightIndex, unsigned char);
    void _propagateSkyLight(SubChunkLightIndex, unsigned char);
    ~SubChunkRelighter();
    void _createSubChunk(unsigned int, unsigned int, unsigned int);
    void getFullyDarkSubChunk();
    void _getBlock(SubChunkLightIndex, Block const*&, Block const*&, unsigned int &, unsigned int &, unsigned int &, unsigned int &);
    void initializeStatics();
    void _setPropagatedBlockLightValue(SubChunkLightIndex, unsigned char);
    void _propagateSubtractiveSkyLight();
    void _getAbsorption(SubChunkLightIndex, unsigned char &)const;
    void getBlock(Pos const&, Block const*&, Block const*&);
    void _propagateSubtractiveBlockLight(SubChunkLightIndex, unsigned char);
    void shutdownStatics();
    void _getAbsorption(SubChunkLightIndex, unsigned char &, unsigned int &);
    void getTouchedSubChunks(std::vector<Pos> &);
    void _setSkyLight(SubChunkLightIndex, Brightness, Brightness, Brightness, Brightness);
    void _propagateBlockLight(SubChunkLightIndex, unsigned char);
    void getLightPair(Pos const&)const;
    void _setBlockLight(SubChunkLightIndex, Brightness, Brightness, Brightness, Brightness);
};
