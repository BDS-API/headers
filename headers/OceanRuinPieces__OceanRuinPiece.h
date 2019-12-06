#pragma once

class OceanRuinPieces::OceanRuinPiece : TemplateStructurePiece {

public:
    virtual ~OceanRuinPiece();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void _handleDataMarker(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);

    void OceanRuinPiece(StructureManager &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, BlockPos const&, Rotation, float, bool, OceanTempCategory);
    void _loadTemplate(void);
    void OceanRuinPiece(StructureManager &);
    void _getHeight(BlockPos &, BlockSource *, BlockPos const&);
    void getChestReplacer(OceanTempCategory, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
