#pragma once

#include "../bedrock/util/BlockPos"
#include "../bedrock/util/Random"
#include "../bedrock/level/structure/piece/StructurePiece"


class WoodlandMansionPieces {

public:

    void init();
    void startMansion(StructureManager &, BlockPos const&, Rotation, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    void generateMansion(StructureManager &, BlockPos const&, Rotation, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
};
