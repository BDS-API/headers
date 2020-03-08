#pragma once

#include "../../../../unmapped/Dimension"
#include "../../../../unmapped/StructurePoolElement"
#include "../../../../unmapped/JigsawJunction"
#include "../../../../unmapped/JigsawStructureRegistry"
#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"
#include "../../../../unmapped/JigsawBlockInfo"
#include "../../../util/BlockPos"
#include "../../../../unmapped/Block"
#include "../../../util/ChunkPos"
#include "../../../block/unmapped/BlockVolume"
#include "../../../../unmapped/StructureTemplatePool"
#include "../../../../unmapped/BoundingBox"


class PoolElementStructurePiece : StructurePiece {

public:
    virtual PoolElementStructurePiece::~PoolElementStructurePiece()
    virtual void moveBoundingBox(int, int, int);
    virtual bool asPoolElement();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);

    PoolElementStructurePiece(PoolElementStructurePiece const&);
    PoolElementStructurePiece(StructurePoolElement const&, BlockPos, Rotation, int, JigsawJunction &, BoundingBox const&);
    void _fillWithSupportBlock(BlockPos const&, BlockSource *, BoundingBox const&, Block const&, Random &);
    void _stabilizeBeard(BlockPos const&, BlockSource *, Block const&);
    void getRotation()const;
    void getPosition()const;
    void getElement()const;
    void getJunction()const;
    void addPiece(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, StructurePoolElement const*, Random &, BlockPos, Rotation, int, JigsawStructureRegistry const&, Dimension &, BlockVolume &, std::unordered_map<ChunkPos, std::unique_ptr<std::vector<short, std::allocator<short>>, std::default_delete<std::vector<short, std::allocator<short>>>>, std::hash<ChunkPos>, std::equal_to<ChunkPos>, std::allocator<std::pair<ChunkPos const, std::unique_ptr<std::vector<short, std::allocator<short>>, std::default_delete<std::vector<short, std::allocator<short>>>>>>> &);
    void tryPlacingPiece(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, StructurePoolElement const*, Random &, JigsawBlockInfo &, BoundingBox, std::vector&<BoundingBox, std::allocator<BoundingBox>>, BlockPos, StructureTemplatePool const*, int, JigsawStructureRegistry const&, Dimension &, BlockVolume &, std::unordered_map<ChunkPos, std::unique_ptr<std::vector<short, std::allocator<short>>, std::default_delete<std::vector<short, std::allocator<short>>>>, std::hash<ChunkPos>, std::equal_to<ChunkPos>, std::allocator<std::pair<ChunkPos const, std::unique_ptr<std::vector<short, std::allocator<short>>, std::default_delete<std::vector<short, std::allocator<short>>>>>>> &);
    void _generateHeightAtPosition(BlockPos const&, Dimension &, BlockVolume &, std::unordered_map<ChunkPos, std::unique_ptr<std::vector<short, std::allocator<short>>, std::default_delete<std::vector<short, std::allocator<short>>>>, std::hash<ChunkPos>, std::equal_to<ChunkPos>, std::allocator<std::pair<ChunkPos const, std::unique_ptr<std::vector<short, std::allocator<short>>, std::default_delete<std::vector<short, std::allocator<short>>>>>>> &);
    bool hasSpaceInSource(BoundingBox const&, BoundingBox const&, std::vector<BoundingBox, std::allocator<BoundingBox>> &);
    bool hasSpace(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, BoundingBox const&);
};
