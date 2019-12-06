#pragma once

class StructureHelpers {

public:

    void getFacingDirectionRotation(int, unsigned short);
    void getDirectionRotation(int, unsigned short);
    void getWeirdoDirectionRotation(int, unsigned short);
    void getDoorRotation(int, unsigned short);
    void getRailRotation(int, unsigned short);
    void getTorchRotation(int, unsigned short);
    void createChest(StructurePiece &, BlockSource &, BoundingBox const&, Random &, int, int, int, unsigned char, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void createMinecartChest(StructurePiece &, BlockSource &, BoundingBox const&, Random &, int, int, int, int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void createDispenser(StructurePiece &, BlockSource &, BoundingBox const&, Random &, int, int, int, int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void createDoor(StructurePiece &, BlockSource &, BoundingBox const&, Random &, int, int, int, int);
    void fillColumnDown(StructurePiece &, BlockSource &, Block const&, int, int, int, BoundingBox const&);
};
