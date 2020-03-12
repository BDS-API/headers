#pragma once

#include <vector>
#include "../../util/Brightness.h"
#include "SubChunkLightIndex.h"


class SubChunkRelighter {

public:
    static long mOuterEdgeOfComputationBits;
    static long mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits;
    static long sLitSpinLock;
    static long sDarkSpinLock;
    static long sFullyLitSubChunk;
    static long sFullyDarkSubChunk;

    void getTouchedSubChunks(std::vector<Pos> &);
    void _propagateSubtractiveBlockLight(SubChunkLightIndex, unsigned char);
//  void _resetToDo(SubChunkRelighter::SubChunkToDoBitsClearMode); //TODO: incomplete function definition
    void _getLight(SubChunkLightIndex);
    void setBlockLight(Pos const&, Brightness, Brightness, Brightness, Brightness);
    void _getBlock(SubChunkLightIndex, Block const*&, Block const*&, unsigned int &)const;
    void _setBlockLight(SubChunkLightIndex, Brightness, Brightness, Brightness, Brightness);
    void getLightPair(Pos const&)const;
    void _propagateBlockLight(SubChunkLightIndex, unsigned char);
    void _setPropagatedBlockLightValue(SubChunkLightIndex, unsigned char);
    void getBlock(Pos const&, Block const*&, Block const*&);
    void _propagateBlockLight();
    void setSkyLight(Pos const&, Brightness, Brightness, Brightness, Brightness);
    void _propagateSkyLight();
    void _getAbsorptionAndEmissiveness(SubChunkLightIndex, unsigned char &, unsigned char &)const;
    void _propagateSkyLight(SubChunkLightIndex, unsigned char);
    void _setSkyLight(SubChunkLightIndex, Brightness, Brightness, Brightness, Brightness);
    void _getLightPair(SubChunkLightIndex)const;
    void _getAbsorption(SubChunkLightIndex, unsigned char &)const;
    void initializeStatics();
    void _getBlock(SubChunkLightIndex, Block const*&, Block const*&, unsigned int &, unsigned int &, unsigned int &, unsigned int &);
    void getFullyDarkSubChunk();
    void _getBlock(SubChunkLightIndex, Block const*&, Block const*&)const;
    void _getAbsorptionAndEmissivenessAndSubChunkIndex(SubChunkLightIndex, unsigned char &, unsigned char &, unsigned int &)const;
    void _getSubChunk(SubChunkLightIndex, unsigned int &);
    void getCentralSubchunkOrigin();
    void _propagateSubtractiveSkyLight();
    SubChunkRelighter(BlockSource &, unsigned long, ChunkPos const&, bool, bool);
    void computeOuterEdgeOfComputationBits();
    void _getAbsorption(SubChunkLightIndex, unsigned char &, unsigned int &);
    void _dirtySubChunk(SubChunkLightIndex, unsigned int &);
    void _propagateSubtractiveSkyLight(SubChunkLightIndex, unsigned char);
    void getFullyLitSubChunk();
    void _propagateSubtractiveBlockLight();
    void update(BlockPos const&, unsigned long);
    void _setPropagatedSkyLightValue(SubChunkLightIndex, unsigned char);
    void _createSubChunk(unsigned int, unsigned int, unsigned int);
    void computeAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits();
    ~SubChunkRelighter();
    void shutdownStatics();
};
