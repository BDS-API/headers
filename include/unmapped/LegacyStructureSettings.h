#pragma once

#include "../bedrock/block/unmapped/BlockPalette.h"
#include "StructurePoolBlockRule.h"
#include <memory>
#include "../bedrock/util/ChunkPos.h"
#include "Block.h"
#include <vector>
#include "StructurePoolBlockTagRule.h"
#include "BoundingBox.h"
#include "../bedrock/util/Random.h"


class LegacyStructureSettings {

public:
    static long INTEGRITY_MAX;
    static long INTEGRITY_MIN;
    static long MAX_STRUCTURE_SIZE;

    void getSwappedBlock(BlockPalette const&, Block const&)const;
    void getMirror()const;
    void getSeed()const;
    LegacyStructureSettings();
//  void setRotation(Rotation); //TODO: incomplete function definition
    void getProjection()const;
    void getIntegrity()const;
    void getBlockTagRules()const;
    void getBlockRules()const;
    void setIntegrity(float);
    void _calculateBoundingBox(ChunkPos const&);
    bool isIgnoreBlock()const;
    bool isPlacingWaterBelowSeaLevel()const;
    void setSeed(unsigned int);
    void setBlockRules(std::vector<std::unique_ptr<StructurePoolBlockRule>> const*);
    void setBoundingBox(BoundingBox const&);
//  void setProjection(Projection); //TODO: incomplete function definition
    void setBlockTagRules(std::vector<std::unique_ptr<StructurePoolBlockTagRule>> const*);
    void placeWaterBelowSeaLevel(bool);
    bool isIgnoreStructureBlocks()const;
    bool isIgnoreJigsawBlocks()const;
    void getIgnoreBlock()const;
    void getRotation()const;
    void getChunkPos()const;
    void ignoreStructureBlocks(bool);
    void updateBoundingBoxFromChunkPos();
//  void setMirror(Mirror); //TODO: incomplete function definition
    void setIgnoreBlock(Block const*);
    void getBoundingBox();
//  LegacyStructureSettings(Mirror, Rotation, Block const*, BoundingBox const&); //TODO: incomplete function definition
    void getBoundingBoxConst()const;
    LegacyStructureSettings(LegacyStructureSettings const&);
    ~LegacyStructureSettings();
    void retrieveRandom(Random &)const;
    void setChunkPos(ChunkPos const&);
    void addSwapAuxValue(int, int);
};
