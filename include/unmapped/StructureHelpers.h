#pragma once

#include <string>
#include "../bedrock/level/structure/piece/StructurePiece.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "Block.h"
#include "BoundingBox.h"
#include "../bedrock/util/Random.h"


namespace StructureHelpers {

    void getWeirdoDirectionRotation(int, unsigned short);
    void fillColumnDown(StructurePiece &, BlockSource &, Block const&, int, int, int, BoundingBox const&);
    void getFacingDirectionRotation(int, unsigned short);
    void createMinecartChest(StructurePiece &, BlockSource &, BoundingBox const&, Random &, int, int, int, int, std::string const&);
    void getRailRotation(int, unsigned short);
    void getDirectionRotation(int, unsigned short);
    void getTorchRotation(int, unsigned short);
    void createChest(StructurePiece &, BlockSource &, BoundingBox const&, Random &, int, int, int, unsigned char, std::string const&);
    void createDoor(StructurePiece &, BlockSource &, BoundingBox const&, Random &, int, int, int, int);
    void getDoorRotation(int, unsigned short);
    void createDispenser(StructurePiece &, BlockSource &, BoundingBox const&, Random &, int, int, int, int, std::string const&);
};
