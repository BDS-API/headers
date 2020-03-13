#pragma once

#include <vector>


class LegacyStructureSettings {

public:
    static long INTEGRITY_MAX;
    static long INTEGRITY_MIN;
    static long MAX_STRUCTURE_SIZE;

    ~LegacyStructureSettings(); // _ZN23LegacyStructureSettingsD2Ev
    LegacyStructureSettings(LegacyStructureSettings const&); // _ZN23LegacyStructureSettingsC2ERKS_
    LegacyStructureSettings(); // _ZN23LegacyStructureSettingsC2Ev
//  LegacyStructureSettings(Mirror, Rotation, Block const*, BoundingBox const&); //TODO: incomplete function definition // _ZN23LegacyStructureSettingsC2E6Mirror8RotationPK5BlockRK11BoundingBox
    void retrieveRandom(Random &)const; // _ZNK23LegacyStructureSettings14retrieveRandomER6Random
//  void setMirror(Mirror); //TODO: incomplete function definition // _ZN23LegacyStructureSettings9setMirrorE6Mirror
//  void setRotation(Rotation); //TODO: incomplete function definition // _ZN23LegacyStructureSettings11setRotationE8Rotation
    void setIgnoreBlock(Block const*); // _ZN23LegacyStructureSettings14setIgnoreBlockEPK5Block
    void addSwapAuxValue(int, int); // _ZN23LegacyStructureSettings15addSwapAuxValueEii
    void setSeed(unsigned int); // _ZN23LegacyStructureSettings7setSeedEj
    void setIntegrity(float); // _ZN23LegacyStructureSettings12setIntegrityEf
//  void setProjection(Projection); //TODO: incomplete function definition // _ZN23LegacyStructureSettings13setProjectionE10Projection
    void setBlockRules(std::vector<std::unique_ptr<StructurePoolBlockRule>> const*); // _ZN23LegacyStructureSettings13setBlockRulesEPKSt6vectorISt10unique_ptrI22StructurePoolBlockRuleSt14default_deleteIS2_EESaIS5_EE
    void setBlockTagRules(std::vector<std::unique_ptr<StructurePoolBlockTagRule>> const*); // _ZN23LegacyStructureSettings16setBlockTagRulesEPKSt6vectorISt10unique_ptrI25StructurePoolBlockTagRuleSt14default_deleteIS2_EESaIS5_EE
    void getIgnoreBlock()const; // _ZNK23LegacyStructureSettings14getIgnoreBlockEv
    void getSwappedBlock(BlockPalette const&, Block const&)const; // _ZNK23LegacyStructureSettings15getSwappedBlockERK12BlockPaletteRK5Block
    void setChunkPos(ChunkPos const&); // _ZN23LegacyStructureSettings11setChunkPosERK8ChunkPos
    void setBoundingBox(BoundingBox const&); // _ZN23LegacyStructureSettings14setBoundingBoxERK11BoundingBox
    void getMirror()const; // _ZNK23LegacyStructureSettings9getMirrorEv
    void ignoreStructureBlocks(bool); // _ZN23LegacyStructureSettings21ignoreStructureBlocksEb
    void placeWaterBelowSeaLevel(bool); // _ZN23LegacyStructureSettings23placeWaterBelowSeaLevelEb
    void getRotation()const; // _ZNK23LegacyStructureSettings11getRotationEv
    void getChunkPos()const; // _ZNK23LegacyStructureSettings11getChunkPosEv
    bool isIgnoreBlock()const; // _ZNK23LegacyStructureSettings13isIgnoreBlockEv
    void getBoundingBox(); // _ZN23LegacyStructureSettings14getBoundingBoxEv
    void updateBoundingBoxFromChunkPos(); // _ZN23LegacyStructureSettings29updateBoundingBoxFromChunkPosEv
    void getBoundingBoxConst()const; // _ZNK23LegacyStructureSettings19getBoundingBoxConstEv
    bool isIgnoreStructureBlocks()const; // _ZNK23LegacyStructureSettings23isIgnoreStructureBlocksEv
    bool isIgnoreJigsawBlocks()const; // _ZNK23LegacyStructureSettings20isIgnoreJigsawBlocksEv
    bool isPlacingWaterBelowSeaLevel()const; // _ZNK23LegacyStructureSettings27isPlacingWaterBelowSeaLevelEv
    void _calculateBoundingBox(ChunkPos const&); // _ZN23LegacyStructureSettings21_calculateBoundingBoxERK8ChunkPos
    void getSeed()const; // _ZNK23LegacyStructureSettings7getSeedEv
    void getIntegrity()const; // _ZNK23LegacyStructureSettings12getIntegrityEv
    void getProjection()const; // _ZNK23LegacyStructureSettings13getProjectionEv
    void getBlockRules()const; // _ZNK23LegacyStructureSettings13getBlockRulesEv
    void getBlockTagRules()const; // _ZNK23LegacyStructureSettings16getBlockTagRulesEv
};
