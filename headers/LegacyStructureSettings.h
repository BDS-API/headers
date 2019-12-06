#pragma once

class LegacyStructureSettings {

public:
    static long LegacyStructureSettings::INTEGRITY_MAX;
    static long LegacyStructureSettings::INTEGRITY_MIN;
    static long LegacyStructureSettings::MAX_STRUCTURE_SIZE;


    void LegacyStructureSettings(LegacyStructureSettings const&);
    void LegacyStructureSettings(void);
    void LegacyStructureSettings(Mirror, Rotation, Block const*, BoundingBox const&);
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
    void getIgnoreBlock(void)const;
    void getSwappedBlock(BlockPalette const&, Block const&)const;
    void setChunkPos(ChunkPos const&);
    void setBoundingBox(BoundingBox const&);
    void getMirror(void)const;
    void ignoreStructureBlocks(bool);
    void placeWaterBelowSeaLevel(bool);
    void getRotation(void)const;
    void getChunkPos(void)const;
    bool isIgnoreBlock(void)const;
    void getBoundingBox(void);
    void updateBoundingBoxFromChunkPos(void);
    void getBoundingBoxConst(void)const;
    bool isIgnoreStructureBlocks(void)const;
    bool isIgnoreJigsawBlocks(void)const;
    bool isPlacingWaterBelowSeaLevel(void)const;
    void _calculateBoundingBox(ChunkPos const&);
    void getSeed(void)const;
    void getIntegrity(void)const;
    void getProjection(void)const;
    void getBlockRules(void)const;
    void getBlockTagRules(void)const;
};
