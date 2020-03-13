#pragma once

#include <vector>
#include "SectionGenerator.h"


namespace EndCityPieces {

    class FatTowerGenerator : EndCityPieces::SectionGenerator {

    public:
        virtual void generate(StructureManager &, std::vector<std::unique_ptr<EndCityPieces::SectionGenerator>> const&, int, EndCityPieces::EndCityPiece *, BlockPos const&, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN13EndCityPieces17FatTowerGenerator8generateER16StructureManagerRKSt6vectorISt10unique_ptrINS_16SectionGeneratorESt14default_deleteIS5_EESaIS8_EEiPNS_12EndCityPieceERK8BlockPosRS3_IS4_I14StructurePieceS6_ISI_EESaISK_EER6Random
        ~FatTowerGenerator(); // _ZN13EndCityPieces17FatTowerGeneratorD2Ev
        FatTowerGenerator(); // _ZN13EndCityPieces17FatTowerGeneratorC2Ev
    };
}
