#pragma once

#include <vector>


class LegacyStructureSettings {

public:
    static long INTEGRITY_MAX;
    static long INTEGRITY_MIN;
    static long MAX_STRUCTURE_SIZE;

    void setIgnoreBlock(Block const*);
    bool isIgnoreStructureBlocks()const;
    void getProjection()const;
    void getBlockTagRules()const;
    void setBlockTagRules(std::vector<std::unique_ptr<StructurePoolBlockTagRule>> const*);
    bool isPlacingWaterBelowSeaLevel()const;
    void setSeed(unsigned int);
//  void setRotation(Rotation); //TODO: incomplete function definition
    void setIntegrity(float);
    void addSwapAuxValue(int, int);
    void updateBoundingBoxFromChunkPos();
    void _calculateBoundingBox(ChunkPos const&);
    void ignoreStructureBlocks(bool);
    bool isIgnoreBlock()const;
//  LegacyStructureSettings(Mirror, Rotation, Block const*, BoundingBox const&); //TODO: incomplete function definition
    void getBoundingBoxConst()const;
    void setBoundingBox(BoundingBox const&);
    void retrieveRandom(Random &)const;
    LegacyStructureSettings();
    void placeWaterBelowSeaLevel(bool);
    void setChunkPos(ChunkPos const&);
//  void setMirror(Mirror); //TODO: incomplete function definition
    LegacyStructureSettings(LegacyStructureSettings const&);
    void getMirror()const;
    void getChunkPos()const;
    void getIntegrity()const;
    void getBlockRules()const;
    ~LegacyStructureSettings();
    void getSwappedBlock(BlockPalette const&, Block const&)const;
    void setBlockRules(std::vector<std::unique_ptr<StructurePoolBlockRule>> const*);
    void getSeed()const;
    void getRotation()const;
    bool isIgnoreJigsawBlocks()const;
    void getBoundingBox();
    void getIgnoreBlock()const;
//  void setProjection(Projection); //TODO: incomplete function definition
};
