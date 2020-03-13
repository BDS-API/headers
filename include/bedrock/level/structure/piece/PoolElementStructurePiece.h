#pragma once

#include <unordered_map>
#include <vector>
#include "../../../util/BlockPos.h"
#include "StructurePiece.h"
#include "../../../../unmapped/BoundingBox.h"


class PoolElementStructurePiece : StructurePiece {

public:
    ~PoolElementStructurePiece(); // _ZN25PoolElementStructurePieceD2Ev
    virtual void moveBoundingBox(int, int, int); // _ZN25PoolElementStructurePiece15moveBoundingBoxEiii
    virtual bool asPoolElement(); // _ZN25PoolElementStructurePiece13asPoolElementEv
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN25PoolElementStructurePiece11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&); // _ZN25PoolElementStructurePiece17postProcessMobsAtEP11BlockSourceR6RandomRK11BoundingBox
    PoolElementStructurePiece(PoolElementStructurePiece const&); // _ZN25PoolElementStructurePieceC2ERKS_
//  PoolElementStructurePiece(StructurePoolElement const&, BlockPos, Rotation, int, JigsawJunction &, BoundingBox const&); //TODO: incomplete function definition // _ZN25PoolElementStructurePieceC2ERK20StructurePoolElement8BlockPos8RotationiR14JigsawJunctionRK11BoundingBox
    void _fillWithSupportBlock(BlockPos const&, BlockSource *, BoundingBox const&, Block const&, Random &); // _ZN25PoolElementStructurePiece21_fillWithSupportBlockERK8BlockPosP11BlockSourceRK11BoundingBoxRK5BlockR6Random
    void _stabilizeBeard(BlockPos const&, BlockSource *, Block const&); // _ZN25PoolElementStructurePiece15_stabilizeBeardERK8BlockPosP11BlockSourceRK5Block
    void getRotation()const; // _ZNK25PoolElementStructurePiece11getRotationEv
    void getPosition()const; // _ZNK25PoolElementStructurePiece11getPositionEv
    void getElement()const; // _ZNK25PoolElementStructurePiece10getElementEv
    void getJunction()const; // _ZNK25PoolElementStructurePiece11getJunctionEv
//  void addPiece(std::vector<std::unique_ptr<StructurePiece>> &, StructurePoolElement const*, Random &, BlockPos, Rotation, int, JigsawStructureRegistry const&, Dimension &, BlockVolume &, std::unordered_map<ChunkPos, std::unique_ptr<std::vector<short>>, std::hash<ChunkPos>, std::equal_to<ChunkPos>, std::allocator<std::pair<ChunkPos const, std::unique_ptr<std::vector<short>>>>> &); //TODO: incomplete function definition // _ZN25PoolElementStructurePiece8addPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EEPK20StructurePoolElementR6Random8BlockPos8RotationiRK23JigsawStructureRegistryR9DimensionR11BlockVolumeRSt13unordered_mapI8ChunkPosS1_IS0_IsSaIsEES3_ISQ_EESt4hashISO_ESt8equal_toISO_ESaISt4pairIKSO_SS_EEE
    void tryPlacingPiece(std::vector<std::unique_ptr<StructurePiece>> &, StructurePoolElement const*, Random &, JigsawBlockInfo &, BoundingBox, std::vector<BoundingBox> &, BlockPos, StructureTemplatePool const*, int, JigsawStructureRegistry const&, Dimension &, BlockVolume &, std::unordered_map<ChunkPos, std::unique_ptr<std::vector<short>>, std::hash<ChunkPos>, std::equal_to<ChunkPos>, std::allocator<std::pair<ChunkPos const, std::unique_ptr<std::vector<short>>>>> &); // _ZN25PoolElementStructurePiece15tryPlacingPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EEPK20StructurePoolElementR6RandomR15JigsawBlockInfo11BoundingBoxRS0_ISG_SaISG_EE8BlockPosPK21StructureTemplatePooliRK23JigsawStructureRegistryR9DimensionR11BlockVolumeRSt13unordered_mapI8ChunkPosS1_IS0_IsSaIsEES3_ISY_EESt4hashISW_ESt8equal_toISW_ESaISt4pairIKSW_S10_EEE
    void _generateHeightAtPosition(BlockPos const&, Dimension &, BlockVolume &, std::unordered_map<ChunkPos, std::unique_ptr<std::vector<short>>, std::hash<ChunkPos>, std::equal_to<ChunkPos>, std::allocator<std::pair<ChunkPos const, std::unique_ptr<std::vector<short>>>>> &); // _ZN25PoolElementStructurePiece25_generateHeightAtPositionERK8BlockPosR9DimensionR11BlockVolumeRSt13unordered_mapI8ChunkPosSt10unique_ptrISt6vectorIsSaIsEESt14default_deleteISC_EESt4hashIS8_ESt8equal_toIS8_ESaISt4pairIKS8_SF_EEE
    bool hasSpaceInSource(BoundingBox const&, BoundingBox const&, std::vector<BoundingBox> &); // _ZN25PoolElementStructurePiece16hasSpaceInSourceERK11BoundingBoxS2_RSt6vectorIS0_SaIS0_EE
    bool hasSpace(std::vector<std::unique_ptr<StructurePiece>> &, BoundingBox const&); // _ZN25PoolElementStructurePiece8hasSpaceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EERK11BoundingBox
};
