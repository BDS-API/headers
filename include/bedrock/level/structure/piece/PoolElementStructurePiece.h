#pragma once

#include "../../../../unmapped/BoundingBox.h"
#include <vector>
#include "../../../util/BlockPos.h"
#include <unordered_map>
#include "StructurePiece.h"


class PoolElementStructurePiece : StructurePiece {

public:
    virtual bool asPoolElement();
    ~PoolElementStructurePiece();
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void moveBoundingBox(int, int, int);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    void _fillWithSupportBlock(BlockPos const&, BlockSource *, BoundingBox const&, Block const&, Random &);
//  PoolElementStructurePiece(StructurePoolElement const&, BlockPos, Rotation, int, JigsawJunction &, BoundingBox const&); //TODO: incomplete function definition
    PoolElementStructurePiece(PoolElementStructurePiece const&);
    void getPosition()const;
    void getElement()const;
    void _generateHeightAtPosition(BlockPos const&, Dimension &, BlockVolume &, std::unordered_map<ChunkPos, std::unique_ptr<std::vector<short>>, std::hash<ChunkPos>, std::equal_to<ChunkPos>, std::allocator<std::pair<ChunkPos const, std::unique_ptr<std::vector<short>>>>> &);
    bool hasSpaceInSource(BoundingBox const&, BoundingBox const&, std::vector<BoundingBox> &);
    void getRotation()const;
    void tryPlacingPiece(std::vector<std::unique_ptr<StructurePiece>> &, StructurePoolElement const*, Random &, JigsawBlockInfo &, BoundingBox, std::vector<BoundingBox> &, BlockPos, StructureTemplatePool const*, int, JigsawStructureRegistry const&, Dimension &, BlockVolume &, std::unordered_map<ChunkPos, std::unique_ptr<std::vector<short>>, std::hash<ChunkPos>, std::equal_to<ChunkPos>, std::allocator<std::pair<ChunkPos const, std::unique_ptr<std::vector<short>>>>> &);
    bool hasSpace(std::vector<std::unique_ptr<StructurePiece>> &, BoundingBox const&);
    void getJunction()const;
//  void addPiece(std::vector<std::unique_ptr<StructurePiece>> &, StructurePoolElement const*, Random &, BlockPos, Rotation, int, JigsawStructureRegistry const&, Dimension &, BlockVolume &, std::unordered_map<ChunkPos, std::unique_ptr<std::vector<short>>, std::hash<ChunkPos>, std::equal_to<ChunkPos>, std::allocator<std::pair<ChunkPos const, std::unique_ptr<std::vector<short>>>>> &); //TODO: incomplete function definition
    void _stabilizeBeard(BlockPos const&, BlockSource *, Block const&);
};
