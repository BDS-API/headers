#pragma once

#include <string>


namespace StructureHelpers {

    void getWeirdoDirectionRotation(int, unsigned short);
    void getTorchRotation(int, unsigned short);
    void createChest(StructurePiece &, BlockSource &, BoundingBox const&, Random &, int, int, int, unsigned char, std::string const&);
    void getRailRotation(int, unsigned short);
    void getDoorRotation(int, unsigned short);
    void createMinecartChest(StructurePiece &, BlockSource &, BoundingBox const&, Random &, int, int, int, int, std::string const&);
    void createDoor(StructurePiece &, BlockSource &, BoundingBox const&, Random &, int, int, int, int);
    void fillColumnDown(StructurePiece &, BlockSource &, Block const&, int, int, int, BoundingBox const&);
    void createDispenser(StructurePiece &, BlockSource &, BoundingBox const&, Random &, int, int, int, int, std::string const&);
    void getDirectionRotation(int, unsigned short);
    void getFacingDirectionRotation(int, unsigned short);
};
