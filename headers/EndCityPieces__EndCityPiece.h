#pragma once

class EndCityPieces::EndCityPiece : TemplateStructurePiece {

public:
    virtual ~EndCityPiece();
    virtual void getType(void)const;
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void _handleDataMarker(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, BlockPos const&, BlockSource &, Random &, BoundingBox const&);

    void EndCityPiece(StructureManager &);
    void EndCityPiece(StructureManager &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, BlockPos const&, Rotation, bool);
    void _loadAndSetup(BlockPos const&);
};
