#pragma once

#include "../bedrock/util/Random.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/level/structure/piece/StructurePiece.h"
#include "./BoundingBox.h"
#include "./Block.h"
#include <string>


class StructureHelpers {

public:

    void getFacingDirectionRotation(int, unsigned short);
    void getDirectionRotation(int, unsigned short);
    void getWeirdoDirectionRotation(int, unsigned short);
    void getDoorRotation(int, unsigned short);
    void getRailRotation(int, unsigned short);
    void getTorchRotation(int, unsigned short);
    void createChest(StructurePiece &, BlockSource &, BoundingBox const&, Random &, int, int, int, unsigned char, std::string const&);
    void createMinecartChest(StructurePiece &, BlockSource &, BoundingBox const&, Random &, int, int, int, int, std::string const&);
    void createDispenser(StructurePiece &, BlockSource &, BoundingBox const&, Random &, int, int, int, int, std::string const&);
    void createDoor(StructurePiece &, BlockSource &, BoundingBox const&, Random &, int, int, int, int);
    void fillColumnDown(StructurePiece &, BlockSource &, Block const&, int, int, int, BoundingBox const&);
};
