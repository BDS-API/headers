#pragma once

#include "./StructureManager.h"
#include "../bedrock/util/Random.h"
#include <memory>
#include "./SectionGenerator.h"
#include "../bedrock/level/structure/piece/StructurePiece.h"
#include <vector>
#include "../bedrock/level/structure/piece/EndCityPiece.h"
#include "../bedrock/util/BlockPos.h"
#include <string>


class EndCityPieces {

public:
    static long mOverwriteSettings;
    static long mInsertSettings;


    void init();
//  void startHouseTower(StructureManager &, BlockPos const&, Rotation, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &); //TODO: incomplete function definition
    void _addHelper(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, std::unique_ptr<EndCityPieces::EndCityPiece, std::default_delete<EndCityPieces::EndCityPiece>>);
//  void _createPiece(StructureManager &, EndCityPieces::EndCityPiece *, BlockPos const&, std::string const&, Rotation, bool); //TODO: incomplete function definition
//  void _recursiveChildren(StructureManager &, std::vector<std::unique_ptr<EndCityPieces::SectionGenerator, std::default_delete<EndCityPieces::SectionGenerator>>, std::allocator<std::unique_ptr<EndCityPieces::SectionGenerator, std::default_delete<EndCityPieces::SectionGenerator>>>> const&, EndCityPieces::SectionType, int, EndCityPieces::EndCityPiece *, BlockPos const&, std::vector<std::unique_ptr<StructurePiece, std::default_delete<std::vector &>>, std::allocator<std::default_delete<std::vector &>>> &, Random &); //TODO: incomplete function definition
};
