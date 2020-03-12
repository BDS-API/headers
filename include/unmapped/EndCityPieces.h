#pragma once

#include <memory>
#include <string>
#include <vector>


namespace EndCityPieces {

    static long mOverwriteSettings;
    static long mInsertSettings;

    void _addHelper(std::vector<std::unique_ptr<StructurePiece>> &, std::unique_ptr<EndCityPieces::EndCityPiece>);
//  void _createPiece(StructureManager &, EndCityPieces::EndCityPiece *, BlockPos const&, std::string const&, Rotation, bool); //TODO: incomplete function definition
//  void startHouseTower(StructureManager &, BlockPos const&, Rotation, std::vector<std::unique_ptr<StructurePiece>> &, Random &); //TODO: incomplete function definition
//  void _recursiveChildren(StructureManager &, std::vector<std::unique_ptr<EndCityPieces::SectionGenerator>> const&, EndCityPieces::SectionType, int, EndCityPieces::EndCityPiece *, BlockPos const&, std::vector<std::unique_ptr<StructurePiece>> &, Random &); //TODO: incomplete function definition
    void init();
};
