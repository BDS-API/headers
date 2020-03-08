#pragma once

#include "../bedrock/util/BlockPos"
#include "../bedrock/level/structure/piece/EndCityPiece"
#include "../bedrock/util/Random"
#include "../bedrock/level/structure/piece/StructurePiece"


using namespace EndCityPieces;

class FatTowerGenerator : EndCityPieces::SectionGenerator {

public:
    virtual void generate(StructureManager &, std::vector<std::unique_ptr<EndCityPieces::SectionGenerator, std::default_delete<EndCityPieces::SectionGenerator>>, std::allocator<std::unique_ptr<EndCityPieces::SectionGenerator, std::default_delete<EndCityPieces::SectionGenerator>>>> const&, int, EndCityPieces::EndCityPiece *, BlockPos const&, std::vector&<std::unique_ptr<StructurePiece, std::default_delete<std::vector&>>, std::allocator<std::default_delete<std::vector&>>>, Random &);
    EndCityPieces::FatTowerGenerator::~FatTowerGenerator()

    FatTowerGenerator(void);
};
