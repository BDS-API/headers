#pragma once

#include <string>


namespace StructureHelpers {

    void getFacingDirectionRotation(int, unsigned short); // _ZN16StructureHelpers26getFacingDirectionRotationEit
    void getDirectionRotation(int, unsigned short); // _ZN16StructureHelpers20getDirectionRotationEit
    void getWeirdoDirectionRotation(int, unsigned short); // _ZN16StructureHelpers26getWeirdoDirectionRotationEit
    void getDoorRotation(int, unsigned short); // _ZN16StructureHelpers15getDoorRotationEit
    void getRailRotation(int, unsigned short); // _ZN16StructureHelpers15getRailRotationEit
    void getTorchRotation(int, unsigned short); // _ZN16StructureHelpers16getTorchRotationEit
    void createChest(StructurePiece &, BlockSource &, BoundingBox const&, Random &, int, int, int, unsigned char, std::string const&); // _ZN16StructureHelpers11createChestER14StructurePieceR11BlockSourceRK11BoundingBoxR6RandomiiihRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void createMinecartChest(StructurePiece &, BlockSource &, BoundingBox const&, Random &, int, int, int, int, std::string const&); // _ZN16StructureHelpers19createMinecartChestER14StructurePieceR11BlockSourceRK11BoundingBoxR6RandomiiiiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void createDispenser(StructurePiece &, BlockSource &, BoundingBox const&, Random &, int, int, int, int, std::string const&); // _ZN16StructureHelpers15createDispenserER14StructurePieceR11BlockSourceRK11BoundingBoxR6RandomiiiiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void createDoor(StructurePiece &, BlockSource &, BoundingBox const&, Random &, int, int, int, int); // _ZN16StructureHelpers10createDoorER14StructurePieceR11BlockSourceRK11BoundingBoxR6Randomiiii
    void fillColumnDown(StructurePiece &, BlockSource &, Block const&, int, int, int, BoundingBox const&); // _ZN16StructureHelpers14fillColumnDownER14StructurePieceR11BlockSourceRK5BlockiiiRK11BoundingBox
};
