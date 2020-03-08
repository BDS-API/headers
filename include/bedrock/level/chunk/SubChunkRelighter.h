#pragma once

#include "../../block/unmapped/BlockSource"
#include "../../util/Brightness"
#include "../../../unmapped/Pos"
#include "../../../unmapped/Block"
#include "../../util/BlockPos"
#include "../../util/ChunkPos"


class SubChunkRelighter {

public:
    static long mOuterEdgeOfComputationBits;
    static long mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits;
    static long sLitSpinLock;
    static long sDarkSpinLock;
    static long sFullyLitSubChunk;
    static long sFullyDarkSubChunk;


    void computeOuterEdgeOfComputationBits();
    void computeAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits();
    void initializeStatics();
    void shutdownStatics();
    void getTouchedSubChunks(std::vector<Pos, std::allocator<Pos>> &);
    void getBlock(Pos const&, Block const*&, Block const*&);
    void _getBlock(SubChunkLightIndex, Block const*&, Block const*&)const;
    void getLightPair(Pos const&)const;
    void _getLightPair(SubChunkLightIndex)const;
    void setSkyLight(Pos const&, Brightness, Brightness, Brightness, Brightness);
    void _setSkyLight(SubChunkLightIndex, Brightness, Brightness, Brightness, Brightness);
    void setBlockLight(Pos const&, Brightness, Brightness, Brightness, Brightness);
    void _setBlockLight(SubChunkLightIndex, Brightness, Brightness, Brightness, Brightness);
    void _getAbsorption(SubChunkLightIndex, unsigned char &)const;
    void _getAbsorption(SubChunkLightIndex, unsigned char &, unsigned int &);
    void _getBlock(SubChunkLightIndex, Block const*&, Block const*&, unsigned int &)const;
    void _getAbsorptionAndEmissiveness(SubChunkLightIndex, unsigned char &, unsigned char &)const;
    void _getAbsorptionAndEmissivenessAndSubChunkIndex(SubChunkLightIndex, unsigned char &, unsigned char &, unsigned int &)const;
    void update(BlockPos const&, unsigned long);
    void _propagateSubtractiveSkyLight();
    void _propagateSkyLight();
    void _propagateSubtractiveBlockLight();
    void _propagateBlockLight();
    void _propagateSubtractiveSkyLight(SubChunkLightIndex, unsigned char);
    void _resetToDo(SubChunkRelighter::SubChunkToDoBitsClearMode);
    void _getLight(SubChunkLightIndex);
    void _propagateSubtractiveBlockLight(SubChunkLightIndex, unsigned char);
    void _dirtySubChunk(SubChunkLightIndex, unsigned int &);
    void _setPropagatedSkyLightValue(SubChunkLightIndex, unsigned char);
    void _propagateSkyLight(SubChunkLightIndex, unsigned char);
    void _setPropagatedBlockLightValue(SubChunkLightIndex, unsigned char);
    void _propagateBlockLight(SubChunkLightIndex, unsigned char);
    void getFullyLitSubChunk();
    void getFullyDarkSubChunk();
    SubChunkRelighter(BlockSource &, unsigned long, ChunkPos const&, bool, bool);
    void getCentralSubchunkOrigin();
    void _createSubChunk(unsigned int, unsigned int, unsigned int);
    void _getBlock(SubChunkLightIndex, Block const*&, Block const*&, unsigned int &, unsigned int &, unsigned int &, unsigned int &);
    void _getSubChunk(SubChunkLightIndex, unsigned int &);
};
