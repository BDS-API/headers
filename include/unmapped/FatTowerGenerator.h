#pragma once

#include "SectionGenerator.h"
#include <vector>


namespace EndCityPieces {

    class FatTowerGenerator : EndCityPieces::SectionGenerator {

    public:
        virtual void generate(StructureManager &, std::vector<std::unique_ptr<EndCityPieces::SectionGenerator>> const&, int, EndCityPieces::EndCityPiece *, BlockPos const&, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
        ~FatTowerGenerator();
        FatTowerGenerator();
    };
}
