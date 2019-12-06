#pragma once

class EndCityPieces {

public:
    static long EndCityPieces::mOverwriteSettings;
    static long EndCityPieces::mInsertSettings;


    void init(void);
    void startHouseTower(StructureManager &, BlockPos const&, Rotation, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    void _addHelper(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, std::unique_ptr<EndCityPieces::EndCityPiece, std::default_delete<EndCityPieces::EndCityPiece>>);
    void _createPiece(StructureManager &, EndCityPieces::EndCityPiece *, BlockPos const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Rotation, bool);
    void _recursiveChildren(StructureManager &, std::vector<std::unique_ptr<EndCityPieces::SectionGenerator, std::default_delete<EndCityPieces::SectionGenerator>>, std::allocator<std::unique_ptr<EndCityPieces::SectionGenerator, std::default_delete<EndCityPieces::SectionGenerator>>>> const&, EndCityPieces::SectionType, int, EndCityPieces::EndCityPiece *, BlockPos const&, std::vector&<std::unique_ptr<StructurePiece, std::default_delete<std::vector&>>, std::allocator<std::default_delete<std::vector&>>>, Random &);
};