#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/level/structure/piece/StructurePiece"
#include "../bedrock/util/BlockPos"


using namespace WoodlandMansionPieces;

class MansionPiecePlacer {

public:

    void createMansion(BlockPos const&, Rotation, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, WoodlandMansionPieces::MansionGrid &);
    MansionPiecePlacer(StructureManager &, Random &);
    void _entrance(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, WoodlandMansionPieces::PlacementData &);
    void _traverseOuterWalls(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, WoodlandMansionPieces::PlacementData &, WoodlandMansionPieces::SimpleGrid &, unsigned char, int, int, int, int);
    void _traverseWallPiece(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, WoodlandMansionPieces::PlacementData &);
    void _createRoof(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, BlockPos const&, Rotation, WoodlandMansionPieces::SimpleGrid &, WoodlandMansionPieces::SimpleGrid*);
    void _addRoom1x1(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, BlockPos const&, Rotation, unsigned char, WoodlandMansionPieces::FloorRoomCollection &);
    void _addRoom1x2(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, BlockPos const&, Rotation, unsigned char, unsigned char, WoodlandMansionPieces::FloorRoomCollection &, bool);
    void _addRoom2x2(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, BlockPos const&, Rotation, unsigned char, unsigned char, WoodlandMansionPieces::FloorRoomCollection &);
    void _addRoom2x2Secret(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, BlockPos const&, Rotation, WoodlandMansionPieces::FloorRoomCollection &);
    void _traverseTurn(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, WoodlandMansionPieces::PlacementData &);
    void _traverseInnerTurn(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, WoodlandMansionPieces::PlacementData &);
};
