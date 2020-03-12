#pragma once

#include <vector>


namespace WoodlandMansionPieces {

    class MansionPiecePlacer {

    public:
//      void _addRoom2x2(std::vector<std::unique_ptr<StructurePiece>> &, BlockPos const&, Rotation, unsigned char, unsigned char, WoodlandMansionPieces::FloorRoomCollection &); //TODO: incomplete function definition
        void _traverseWallPiece(std::vector<std::unique_ptr<StructurePiece>> &, WoodlandMansionPieces::PlacementData &);
//      void createMansion(BlockPos const&, Rotation, std::vector<std::unique_ptr<StructurePiece>> &, WoodlandMansionPieces::MansionGrid &); //TODO: incomplete function definition
        void _entrance(std::vector<std::unique_ptr<StructurePiece>> &, WoodlandMansionPieces::PlacementData &);
//      void _addRoom1x1(std::vector<std::unique_ptr<StructurePiece>> &, BlockPos const&, Rotation, unsigned char, WoodlandMansionPieces::FloorRoomCollection &); //TODO: incomplete function definition
//      void _addRoom1x2(std::vector<std::unique_ptr<StructurePiece>> &, BlockPos const&, Rotation, unsigned char, unsigned char, WoodlandMansionPieces::FloorRoomCollection &, bool); //TODO: incomplete function definition
        void _traverseOuterWalls(std::vector<std::unique_ptr<StructurePiece>> &, WoodlandMansionPieces::PlacementData &, WoodlandMansionPieces::SimpleGrid &, unsigned char, int, int, int, int);
        MansionPiecePlacer(StructureManager &, Random &);
//      void _addRoom2x2Secret(std::vector<std::unique_ptr<StructurePiece>> &, BlockPos const&, Rotation, WoodlandMansionPieces::FloorRoomCollection &); //TODO: incomplete function definition
        void _traverseTurn(std::vector<std::unique_ptr<StructurePiece>> &, WoodlandMansionPieces::PlacementData &);
//      void _createRoof(std::vector<std::unique_ptr<StructurePiece>> &, BlockPos const&, Rotation, WoodlandMansionPieces::SimpleGrid &, WoodlandMansionPieces::SimpleGrid *); //TODO: incomplete function definition
        void _traverseInnerTurn(std::vector<std::unique_ptr<StructurePiece>> &, WoodlandMansionPieces::PlacementData &);
    };
}
