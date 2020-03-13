#pragma once

#include "../../util/Brightness.h"
#include "SubChunkLightIndex.h"
#include <vector>


class SubChunkRelighter {

public:
    static long mOuterEdgeOfComputationBits;
    static long mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits;
    static long sLitSpinLock;
    static long sDarkSpinLock;
    static long sFullyLitSubChunk;
    static long sFullyDarkSubChunk;

    void computeOuterEdgeOfComputationBits(); // _ZN17SubChunkRelighter33computeOuterEdgeOfComputationBitsEv
    void computeAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits(); // _ZN17SubChunkRelighter63computeAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBitsEv
    void initializeStatics(); // _ZN17SubChunkRelighter17initializeStaticsEv
    void shutdownStatics(); // _ZN17SubChunkRelighter15shutdownStaticsEv
    void getTouchedSubChunks(std::vector<Pos> &); // _ZN17SubChunkRelighter19getTouchedSubChunksERSt6vectorI3PosSaIS1_EE
    void getBlock(Pos const&, Block const*&, Block const*&); // _ZN17SubChunkRelighter8getBlockERK3PosRPK5BlockS6_
    void _getBlock(SubChunkLightIndex, Block const*&, Block const*&)const; // _ZNK17SubChunkRelighter9_getBlockE18SubChunkLightIndexRPK5BlockS4_
    void getLightPair(Pos const&)const; // _ZNK17SubChunkRelighter12getLightPairERK3Pos
    void _getLightPair(SubChunkLightIndex)const; // _ZNK17SubChunkRelighter13_getLightPairE18SubChunkLightIndex
    void setSkyLight(Pos const&, Brightness, Brightness, Brightness, Brightness); // _ZN17SubChunkRelighter11setSkyLightERK3Pos10BrightnessS3_S3_S3_
    void _setSkyLight(SubChunkLightIndex, Brightness, Brightness, Brightness, Brightness); // _ZN17SubChunkRelighter12_setSkyLightE18SubChunkLightIndex10BrightnessS1_S1_S1_
    void setBlockLight(Pos const&, Brightness, Brightness, Brightness, Brightness); // _ZN17SubChunkRelighter13setBlockLightERK3Pos10BrightnessS3_S3_S3_
    void _setBlockLight(SubChunkLightIndex, Brightness, Brightness, Brightness, Brightness); // _ZN17SubChunkRelighter14_setBlockLightE18SubChunkLightIndex10BrightnessS1_S1_S1_
    void _getAbsorption(SubChunkLightIndex, unsigned char &)const; // _ZNK17SubChunkRelighter14_getAbsorptionE18SubChunkLightIndexRh
    void _getAbsorption(SubChunkLightIndex, unsigned char &, unsigned int &); // _ZN17SubChunkRelighter14_getAbsorptionE18SubChunkLightIndexRhRj
    void _getBlock(SubChunkLightIndex, Block const*&, Block const*&, unsigned int &)const; // _ZNK17SubChunkRelighter9_getBlockE18SubChunkLightIndexRPK5BlockS4_Rj
    void _getAbsorptionAndEmissiveness(SubChunkLightIndex, unsigned char &, unsigned char &)const; // _ZNK17SubChunkRelighter29_getAbsorptionAndEmissivenessE18SubChunkLightIndexRhS1_
    void _getAbsorptionAndEmissivenessAndSubChunkIndex(SubChunkLightIndex, unsigned char &, unsigned char &, unsigned int &)const; // _ZNK17SubChunkRelighter45_getAbsorptionAndEmissivenessAndSubChunkIndexE18SubChunkLightIndexRhS1_Rj
    void update(BlockPos const&, unsigned long); // _ZN17SubChunkRelighter6updateERK8BlockPosm
    void _propagateSubtractiveSkyLight(); // _ZN17SubChunkRelighter29_propagateSubtractiveSkyLightEv
    void _propagateSkyLight(); // _ZN17SubChunkRelighter18_propagateSkyLightEv
    void _propagateSubtractiveBlockLight(); // _ZN17SubChunkRelighter31_propagateSubtractiveBlockLightEv
    void _propagateBlockLight(); // _ZN17SubChunkRelighter20_propagateBlockLightEv
    void _propagateSubtractiveSkyLight(SubChunkLightIndex, unsigned char); // _ZN17SubChunkRelighter29_propagateSubtractiveSkyLightE18SubChunkLightIndexh
//  void _resetToDo(SubChunkRelighter::SubChunkToDoBitsClearMode); //TODO: incomplete function definition // _ZN17SubChunkRelighter10_resetToDoENS_25SubChunkToDoBitsClearModeE
    void _getLight(SubChunkLightIndex); // _ZN17SubChunkRelighter9_getLightE18SubChunkLightIndex
    void _propagateSubtractiveBlockLight(SubChunkLightIndex, unsigned char); // _ZN17SubChunkRelighter31_propagateSubtractiveBlockLightE18SubChunkLightIndexh
    void _dirtySubChunk(SubChunkLightIndex, unsigned int &); // _ZN17SubChunkRelighter14_dirtySubChunkE18SubChunkLightIndexRj
    void _setPropagatedSkyLightValue(SubChunkLightIndex, unsigned char); // _ZN17SubChunkRelighter27_setPropagatedSkyLightValueE18SubChunkLightIndexh
    void _propagateSkyLight(SubChunkLightIndex, unsigned char); // _ZN17SubChunkRelighter18_propagateSkyLightE18SubChunkLightIndexh
    void _setPropagatedBlockLightValue(SubChunkLightIndex, unsigned char); // _ZN17SubChunkRelighter29_setPropagatedBlockLightValueE18SubChunkLightIndexh
    void _propagateBlockLight(SubChunkLightIndex, unsigned char); // _ZN17SubChunkRelighter20_propagateBlockLightE18SubChunkLightIndexh
    void getFullyLitSubChunk(); // _ZN17SubChunkRelighter19getFullyLitSubChunkEv
    void getFullyDarkSubChunk(); // _ZN17SubChunkRelighter20getFullyDarkSubChunkEv
    SubChunkRelighter(BlockSource &, unsigned long, ChunkPos const&, bool, bool); // _ZN17SubChunkRelighterC2ER11BlockSourcemRK8ChunkPosbb
    ~SubChunkRelighter(); // _ZN17SubChunkRelighterD2Ev
    void getCentralSubchunkOrigin(); // _ZN17SubChunkRelighter24getCentralSubchunkOriginEv
    void _createSubChunk(unsigned int, unsigned int, unsigned int); // _ZN17SubChunkRelighter15_createSubChunkEjjj
    void _getBlock(SubChunkLightIndex, Block const*&, Block const*&, unsigned int &, unsigned int &, unsigned int &, unsigned int &); // _ZN17SubChunkRelighter9_getBlockE18SubChunkLightIndexRPK5BlockS4_RjS5_S5_S5_
    void _getSubChunk(SubChunkLightIndex, unsigned int &); // _ZN17SubChunkRelighter12_getSubChunkE18SubChunkLightIndexRj
};
