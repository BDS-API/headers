#pragma once

class WoodlandMansionPieces::WoodlandMansionPiece : TemplateStructurePiece {

public:
    virtual ~WoodlandMansionPiece();
    virtual void getType(void)const;
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void _handleDataMarker(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);

    void WoodlandMansionPiece(StructureManager &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, BlockPos const&, Rotation);
    void WoodlandMansionPiece(StructureManager &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, BlockPos const&, Rotation, Mirror);
    void _loadTemplate(void);
    void WoodlandMansionPiece(StructureManager &);
    void _addChest(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);
};
