#pragma once

class PillagerOutpostPieces::PillagerOutpostPiece : TemplateStructurePiece {

public:
    virtual ~PillagerOutpostPiece();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void addHardcodedSpawnAreas(LevelChunk &)const;
    virtual void _handleDataMarker(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);

    void PillagerOutpostPiece(StructureManager &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, BlockPos const&, Rotation, float, bool, Dimension &);
    void _loadTemplate(void);
    void PillagerOutpostPiece(StructureManager &);
    void _addMobsFromPositions(BoundingBox const&, ActorDefinitionIdentifier const&, BlockSource &, std::vector<BlockPos, std::allocator<BlockPos>> const&);
};
