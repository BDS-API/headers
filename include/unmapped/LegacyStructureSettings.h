#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/util/ChunkPos"
#include "../bedrock/block/unmapped/BlockPalette"


class LegacyStructureSettings {

public:
    static long INTEGRITY_MAX;
    static long INTEGRITY_MIN;
    static long MAX_STRUCTURE_SIZE;


    LegacyStructureSettings(LegacyStructureSettings const&);
    LegacyStructureSettings(void);
    LegacyStructureSettings(Mirror, Rotation, Block const*, BoundingBox const&);
    void retrieveRandom(Random &)const;
    void setMirror(Mirror);
    void setRotation(Rotation);
    void setIgnoreBlock(Block const*);
    void addSwapAuxValue(int, int);
    void setSeed(unsigned int);
    void setIntegrity(float);
    void setProjection(Projection);
    void setBlockRules(std::vector<std::unique_ptr<StructurePoolBlockRule, std::default_delete<StructurePoolBlockRule>>, std::allocator<std::unique_ptr<StructurePoolBlockRule, std::default_delete<StructurePoolBlockRule>>>> const*);
    void setBlockTagRules(std::vector<std::unique_ptr<StructurePoolBlockTagRule, std::default_delete<StructurePoolBlockTagRule>>, std::allocator<std::unique_ptr<StructurePoolBlockTagRule, std::default_delete<StructurePoolBlockTagRule>>>> const*);
    void getIgnoreBlock()const;
    void getSwappedBlock(BlockPalette const&, Block const&)const;
    void setChunkPos(ChunkPos const&);
    void setBoundingBox(BoundingBox const&);
    void getMirror()const;
    void ignoreStructureBlocks(bool);
    void placeWaterBelowSeaLevel(bool);
    void getRotation()const;
    void getChunkPos()const;
    bool isIgnoreBlock()const;
    void getBoundingBox();
    void updateBoundingBoxFromChunkPos();
    void getBoundingBoxConst()const;
    bool isIgnoreStructureBlocks()const;
    bool isIgnoreJigsawBlocks()const;
    bool isPlacingWaterBelowSeaLevel()const;
    void _calculateBoundingBox(ChunkPos const&);
    void getSeed()const;
    void getIntegrity()const;
    void getProjection()const;
    void getBlockRules()const;
    void getBlockTagRules()const;
};
