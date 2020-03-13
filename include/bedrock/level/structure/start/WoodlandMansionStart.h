#pragma once

#include "StructureStart.h"


class WoodlandMansionStart : StructureStart {

public:
    ~WoodlandMansionStart(); // _ZN20WoodlandMansionStartD2Ev
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN20WoodlandMansionStart11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    virtual void getType()const; // _ZNK20WoodlandMansionStart7getTypeEv
    WoodlandMansionStart(); // _ZN20WoodlandMansionStartC2Ev
    WoodlandMansionStart(Dimension &, OverworldGenerator &, Random &, int, int); // _ZN20WoodlandMansionStartC2ER9DimensionR18OverworldGeneratorR6Randomii
    void _create(Dimension &, OverworldGenerator &, Random &, int, int); // _ZN20WoodlandMansionStart7_createER9DimensionR18OverworldGeneratorR6Randomii
    void _fillCobblestone(BlockPos const&, BlockSource *, BoundingBox const&); // _ZN20WoodlandMansionStart16_fillCobblestoneERK8BlockPosP11BlockSourceRK11BoundingBox
    void _convertToStairsDirection(unsigned char)const; // _ZNK20WoodlandMansionStart25_convertToStairsDirectionEh
    void _makeStairs(BlockPos const&, Block const&, unsigned char, unsigned char, BlockSource *, BoundingBox const&); // _ZN20WoodlandMansionStart11_makeStairsERK8BlockPosRK5BlockhhP11BlockSourceRK11BoundingBox
    void createFromSlashCommand(Dimension &, ChunkSource &, Random &, BlockPos const&); // _ZN20WoodlandMansionStart22createFromSlashCommandER9DimensionR11ChunkSourceR6RandomRK8BlockPos
};
