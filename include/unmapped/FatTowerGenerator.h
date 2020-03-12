#pragma once

#include "../bedrock/level/structure/piece/StructurePiece.h"
#include "../bedrock/util/BlockPos.h"
#include "SectionGenerator.h"
#include "../bedrock/level/structure/piece/EndCityPiece.h"
#include <vector>
#include <memory>
#include "../bedrock/util/Random.h"
#include "StructureManager.h"


namespace EndCityPieces {

    class FatTowerGenerator : EndCityPieces::SectionGenerator {

    public:
        virtual void generate(StructureManager &, std::vector<std::unique_ptr<EndCityPieces::SectionGenerator>> const&, int, EndCityPieces::EndCityPiece *, BlockPos const&, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
        ~FatTowerGenerator();
        FatTowerGenerator();
    };
}
