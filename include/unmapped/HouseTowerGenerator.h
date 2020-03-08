#pragma once



using namespace EndCityPieces;

class HouseTowerGenerator : EndCityPieces::SectionGenerator {

public:
    virtual void generate(StructureManager &, std::vector<std::unique_ptr<EndCityPieces::SectionGenerator, std::default_delete<EndCityPieces::SectionGenerator>>, std::allocator<std::unique_ptr<EndCityPieces::SectionGenerator, std::default_delete<EndCityPieces::SectionGenerator>>>> const&, int, EndCityPieces::EndCityPiece *, BlockPos const&, std::vector&<std::unique_ptr<StructurePiece, std::default_delete<std::vector&>>, std::allocator<std::default_delete<std::vector&>>>, Random &);
    virtual void EndCityPieces::HouseTowerGenerator::~HouseTowerGenerator();

    HouseTowerGenerator(void);
};
