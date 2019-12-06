#pragma once

class PoolElementStructurePiece : StructurePiece {

public:
    virtual ~PoolElementStructurePiece();
    virtual void moveBoundingBox(int, int, int);
    virtual void asPoolElement(void);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);

    void PoolElementStructurePiece(PoolElementStructurePiece const&);
    void PoolElementStructurePiece(StructurePoolElement const&, BlockPos, Rotation, int, JigsawJunction &, BoundingBox const&);
    void _fillWithSupportBlock(BlockPos const&, BlockSource *, BoundingBox const&, Block const&, Random &);
    void _stabilizeBeard(BlockPos const&, BlockSource *, Block const&);
    void getRotation(void)const;
    void getPosition(void)const;
    void getElement(void)const;
    void getJunction(void)const;
    void addPiece(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, StructurePoolElement const*, Random &, BlockPos, Rotation, int, JigsawStructureRegistry const&, Dimension &, BlockVolume &, std::unordered_map<ChunkPos, std::unique_ptr<std::vector<short, std::allocator<short>>, std::default_delete<std::vector<short, std::allocator<short>>>>, std::hash<ChunkPos>, std::equal_to<ChunkPos>, std::allocator<std::pair<ChunkPos const, std::unique_ptr<std::vector<short, std::allocator<short>>, std::default_delete<std::vector<short, std::allocator<short>>>>>>> &);
    void tryPlacingPiece(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, StructurePoolElement const*, Random &, JigsawBlockInfo &, BoundingBox, std::vector&<BoundingBox, std::allocator<BoundingBox>>, BlockPos, StructureTemplatePool const*, int, JigsawStructureRegistry const&, Dimension &, BlockVolume &, std::unordered_map<ChunkPos, std::unique_ptr<std::vector<short, std::allocator<short>>, std::default_delete<std::vector<short, std::allocator<short>>>>, std::hash<ChunkPos>, std::equal_to<ChunkPos>, std::allocator<std::pair<ChunkPos const, std::unique_ptr<std::vector<short, std::allocator<short>>, std::default_delete<std::vector<short, std::allocator<short>>>>>>> &);
    void _generateHeightAtPosition(BlockPos const&, Dimension &, BlockVolume &, std::unordered_map<ChunkPos, std::unique_ptr<std::vector<short, std::allocator<short>>, std::default_delete<std::vector<short, std::allocator<short>>>>, std::hash<ChunkPos>, std::equal_to<ChunkPos>, std::allocator<std::pair<ChunkPos const, std::unique_ptr<std::vector<short, std::allocator<short>>, std::default_delete<std::vector<short, std::allocator<short>>>>>>> &);
    bool hasSpaceInSource(BoundingBox const&, BoundingBox const&, std::vector<BoundingBox, std::allocator<BoundingBox>> &);
    bool hasSpace(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, BoundingBox const&);
};
