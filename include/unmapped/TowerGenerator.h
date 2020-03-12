#pragma once

#include "SectionGenerator.h"
#include <vector>


namespace EndCityPieces {

    class TowerGenerator : EndCityPieces::SectionGenerator {

    public:
        ~TowerGenerator();
        virtual void generate(StructureManager &, std::vector<std::unique_ptr<EndCityPieces::SectionGenerator>> const&, int, EndCityPieces::EndCityPiece *, BlockPos const&, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
        TowerGenerator();
    };
}
