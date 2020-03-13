#pragma once

#include <vector>


namespace WoodlandMansionPieces {

    class MansionPiecePlacer {

    public:
//      void createMansion(BlockPos const&, Rotation, std::vector<std::unique_ptr<StructurePiece>> &, WoodlandMansionPieces::MansionGrid &); //TODO: incomplete function definition // _ZN21WoodlandMansionPieces18MansionPiecePlacer13createMansionERK8BlockPos8RotationRSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS7_EESaISA_EERNS_11MansionGridE
        MansionPiecePlacer(StructureManager &, Random &); // _ZN21WoodlandMansionPieces18MansionPiecePlacerC2ER16StructureManagerR6Random
        void _entrance(std::vector<std::unique_ptr<StructurePiece>> &, WoodlandMansionPieces::PlacementData &); // _ZN21WoodlandMansionPieces18MansionPiecePlacer9_entranceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS3_EESaIS6_EERNS_13PlacementDataE
        void _traverseOuterWalls(std::vector<std::unique_ptr<StructurePiece>> &, WoodlandMansionPieces::PlacementData &, WoodlandMansionPieces::SimpleGrid &, unsigned char, int, int, int, int); // _ZN21WoodlandMansionPieces18MansionPiecePlacer19_traverseOuterWallsERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS3_EESaIS6_EERNS_13PlacementDataERNS_10SimpleGridEhiiii
        void _traverseWallPiece(std::vector<std::unique_ptr<StructurePiece>> &, WoodlandMansionPieces::PlacementData &); // _ZN21WoodlandMansionPieces18MansionPiecePlacer18_traverseWallPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS3_EESaIS6_EERNS_13PlacementDataE
//      void _createRoof(std::vector<std::unique_ptr<StructurePiece>> &, BlockPos const&, Rotation, WoodlandMansionPieces::SimpleGrid &, WoodlandMansionPieces::SimpleGrid *); //TODO: incomplete function definition // _ZN21WoodlandMansionPieces18MansionPiecePlacer11_createRoofERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS3_EESaIS6_EERK8BlockPos8RotationRNS_10SimpleGridEPSE_
//      void _addRoom1x1(std::vector<std::unique_ptr<StructurePiece>> &, BlockPos const&, Rotation, unsigned char, WoodlandMansionPieces::FloorRoomCollection &); //TODO: incomplete function definition // _ZN21WoodlandMansionPieces18MansionPiecePlacer11_addRoom1x1ERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS3_EESaIS6_EERK8BlockPos8RotationhRNS_19FloorRoomCollectionE
//      void _addRoom1x2(std::vector<std::unique_ptr<StructurePiece>> &, BlockPos const&, Rotation, unsigned char, unsigned char, WoodlandMansionPieces::FloorRoomCollection &, bool); //TODO: incomplete function definition // _ZN21WoodlandMansionPieces18MansionPiecePlacer11_addRoom1x2ERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS3_EESaIS6_EERK8BlockPos8RotationhhRNS_19FloorRoomCollectionEb
//      void _addRoom2x2(std::vector<std::unique_ptr<StructurePiece>> &, BlockPos const&, Rotation, unsigned char, unsigned char, WoodlandMansionPieces::FloorRoomCollection &); //TODO: incomplete function definition // _ZN21WoodlandMansionPieces18MansionPiecePlacer11_addRoom2x2ERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS3_EESaIS6_EERK8BlockPos8RotationhhRNS_19FloorRoomCollectionE
//      void _addRoom2x2Secret(std::vector<std::unique_ptr<StructurePiece>> &, BlockPos const&, Rotation, WoodlandMansionPieces::FloorRoomCollection &); //TODO: incomplete function definition // _ZN21WoodlandMansionPieces18MansionPiecePlacer17_addRoom2x2SecretERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS3_EESaIS6_EERK8BlockPos8RotationRNS_19FloorRoomCollectionE
        void _traverseTurn(std::vector<std::unique_ptr<StructurePiece>> &, WoodlandMansionPieces::PlacementData &); // _ZN21WoodlandMansionPieces18MansionPiecePlacer13_traverseTurnERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS3_EESaIS6_EERNS_13PlacementDataE
        void _traverseInnerTurn(std::vector<std::unique_ptr<StructurePiece>> &, WoodlandMansionPieces::PlacementData &); // _ZN21WoodlandMansionPieces18MansionPiecePlacer18_traverseInnerTurnERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS3_EESaIS6_EERNS_13PlacementDataE
    };
}
