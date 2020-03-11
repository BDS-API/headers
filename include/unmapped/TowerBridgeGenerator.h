#pragma once

#include "./StructureManager.h"
#include "../bedrock/util/Random.h"
#include <memory>
#include "./SectionGenerator.h"
#include "../bedrock/level/structure/piece/StructurePiece.h"
#include <vector>
#include "../bedrock/level/structure/piece/EndCityPiece.h"
#include "../bedrock/util/BlockPos.h"


namespace EndCityPieces {

class TowerBridgeGenerator : EndCityPieces::SectionGenerator {

public:
    virtual void generate(StructureManager &, std::vector<std::unique_ptr<EndCityPieces::SectionGenerator, std::default_delete<EndCityPieces::SectionGenerator>>, std::allocator<std::unique_ptr<EndCityPieces::SectionGenerator, std::default_delete<EndCityPieces::SectionGenerator>>>> const&, int, EndCityPieces::EndCityPiece *, BlockPos const&, std::vector<std::unique_ptr<StructurePiece, std::default_delete<std::vector &>>, std::allocator<std::default_delete<std::vector &>>> &, Random &);
    virtual ~TowerBridgeGenerator();

    TowerBridgeGenerator();
};

}