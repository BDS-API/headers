#pragma once

#include <string>
#include "../bedrock/level/structure/piece/StructurePiece.h"
#include "../bedrock/util/BlockPos.h"
#include "SectionGenerator.h"
#include "../bedrock/level/structure/piece/EndCityPiece.h"
#include <vector>
#include <memory>
#include "../bedrock/util/Random.h"
#include "StructureManager.h"


namespace EndCityPieces {

    static long mOverwriteSettings;
    static long mInsertSettings;

//  void _recursiveChildren(StructureManager &, std::vector<std::unique_ptr<EndCityPieces::SectionGenerator>> const&, EndCityPieces::SectionType, int, EndCityPieces::EndCityPiece *, BlockPos const&, std::vector<std::unique_ptr<StructurePiece>> &, Random &); //TODO: incomplete function definition
//  void startHouseTower(StructureManager &, BlockPos const&, Rotation, std::vector<std::unique_ptr<StructurePiece>> &, Random &); //TODO: incomplete function definition
//  void _createPiece(StructureManager &, EndCityPieces::EndCityPiece *, BlockPos const&, std::string const&, Rotation, bool); //TODO: incomplete function definition
    void _addHelper(std::vector<std::unique_ptr<StructurePiece>> &, std::unique_ptr<EndCityPieces::EndCityPiece>);
    void init();
};
