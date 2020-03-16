#pragma once

#include "SectionGenerator.h"
#include <vector>


namespace EndCityPieces {

    class TowerGenerator : public EndCityPieces::SectionGenerator {

    public:
        virtual void generate(StructureManager &, std::vector<std::unique_ptr<EndCityPieces::SectionGenerator>> const&, int, EndCityPieces::EndCityPiece *, BlockPos const&, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN13EndCityPieces14TowerGenerator8generateER16StructureManagerRKSt6vectorISt10unique_ptrINS_16SectionGeneratorESt14default_deleteIS5_EESaIS8_EEiPNS_12EndCityPieceERK8BlockPosRS3_IS4_I14StructurePieceS6_ISI_EESaISK_EER6Random
        virtual ~TowerGenerator(); // _ZN13EndCityPieces14TowerGeneratorD2Ev
        virtual void __fake_function0(); // fake
        TowerGenerator(); // _ZN13EndCityPieces14TowerGeneratorC2Ev
    };
}
