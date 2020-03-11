#pragma once

#include "./StructureManager.h"
#include "../bedrock/util/Random.h"
#include <memory>
#include "./PlacementData.h"
#include "./FloorRoomCollection.h"
#include "../bedrock/level/structure/piece/StructurePiece.h"
#include "./SimpleGrid.h"
#include <vector>
#include "./MansionGrid.h"
#include "../bedrock/util/BlockPos.h"


namespace WoodlandMansionPieces {

class MansionPiecePlacer {

public:

//  void createMansion(BlockPos const&, Rotation, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, WoodlandMansionPieces::MansionGrid &); //TODO: incomplete function definition
    MansionPiecePlacer(StructureManager &, Random &);
    void _entrance(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, WoodlandMansionPieces::PlacementData &);
    void _traverseOuterWalls(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, WoodlandMansionPieces::PlacementData &, WoodlandMansionPieces::SimpleGrid &, unsigned char, int, int, int, int);
    void _traverseWallPiece(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, WoodlandMansionPieces::PlacementData &);
//  void _createRoof(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, BlockPos const&, Rotation, WoodlandMansionPieces::SimpleGrid &, WoodlandMansionPieces::SimpleGrid *); //TODO: incomplete function definition
//  void _addRoom1x1(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, BlockPos const&, Rotation, unsigned char, WoodlandMansionPieces::FloorRoomCollection &); //TODO: incomplete function definition
//  void _addRoom1x2(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, BlockPos const&, Rotation, unsigned char, unsigned char, WoodlandMansionPieces::FloorRoomCollection &, bool); //TODO: incomplete function definition
//  void _addRoom2x2(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, BlockPos const&, Rotation, unsigned char, unsigned char, WoodlandMansionPieces::FloorRoomCollection &); //TODO: incomplete function definition
//  void _addRoom2x2Secret(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, BlockPos const&, Rotation, WoodlandMansionPieces::FloorRoomCollection &); //TODO: incomplete function definition
    void _traverseTurn(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, WoodlandMansionPieces::PlacementData &);
    void _traverseInnerTurn(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, WoodlandMansionPieces::PlacementData &);
};

}