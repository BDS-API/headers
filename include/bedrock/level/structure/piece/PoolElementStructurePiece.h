#pragma once

#include "../../../../unmapped/JigsawBlockInfo.h"
#include "../../../../unmapped/Dimension.h"
#include <unordered_map>
#include <memory>
#include "../../../block/unmapped/BlockVolume.h"
#include "../../../block/unmapped/BlockSource.h"
#include "../../../../unmapped/Block.h"
#include <functional>
#include "../../../util/BlockPos.h"
#include "../../../../unmapped/StructureTemplatePool.h"
#include "../../../util/ChunkPos.h"
#include "../../../../unmapped/JigsawStructureRegistry.h"
#include "StructurePiece.h"
#include "../../../../unmapped/BoundingBox.h"
#include <vector>
#include <utility>
#include "../../../../unmapped/JigsawJunction.h"
#include "../../../util/Random.h"
#include "../../../../unmapped/StructurePoolElement.h"


class PoolElementStructurePiece : StructurePiece {

public:
    ~PoolElementStructurePiece();
    virtual bool asPoolElement();
    virtual void moveBoundingBox(int, int, int);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    void getRotation()const;
    void getJunction()const;
//  void addPiece(std::vector<std::unique_ptr<StructurePiece>> &, StructurePoolElement const*, Random &, BlockPos, Rotation, int, JigsawStructureRegistry const&, Dimension &, BlockVolume &, std::unordered_map<ChunkPos, std::unique_ptr<std::vector<short>>, std::hash<ChunkPos>, std::equal_to<ChunkPos>, std::allocator<std::pair<ChunkPos const, std::unique_ptr<std::vector<short>>>>> &); //TODO: incomplete function definition
    void _stabilizeBeard(BlockPos const&, BlockSource *, Block const&);
//  void _generateHeightAtPosition(BlockPos const&, Dimension &, BlockVolume &, std::unordered_map<ChunkPos, std::unique_ptr<std::vector<short>>, std::hash<ChunkPos>, std::equal_to<ChunkPos>, std::allocator<std::pair<ChunkPos const, std::unique_ptr<std::vector<short>>>>> &); //TODO: incomplete function definition
    bool hasSpace(std::vector<std::unique_ptr<StructurePiece>> &, BoundingBox const&);
    void getElement()const;
//  void tryPlacingPiece(std::vector<std::unique_ptr<StructurePiece>> &, StructurePoolElement const*, Random &, JigsawBlockInfo &, BoundingBox, std::vector<BoundingBox> &, BlockPos, StructureTemplatePool const*, int, JigsawStructureRegistry const&, Dimension &, BlockVolume &, std::unordered_map<ChunkPos, std::unique_ptr<std::vector<short>>, std::hash<ChunkPos>, std::equal_to<ChunkPos>, std::allocator<std::pair<ChunkPos const, std::unique_ptr<std::vector<short>>>>> &); //TODO: incomplete function definition
    PoolElementStructurePiece(PoolElementStructurePiece const&);
    void _fillWithSupportBlock(BlockPos const&, BlockSource *, BoundingBox const&, Block const&, Random &);
//  PoolElementStructurePiece(StructurePoolElement const&, BlockPos, Rotation, int, JigsawJunction &, BoundingBox const&); //TODO: incomplete function definition
    void getPosition()const;
    bool hasSpaceInSource(BoundingBox const&, BoundingBox const&, std::vector<BoundingBox> &);
};
