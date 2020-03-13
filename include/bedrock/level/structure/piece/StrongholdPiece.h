#pragma once

#include <string>
#include "StructurePiece.h"
#include <vector>


class StrongholdPiece : StructurePiece {

public:
    ~StrongholdPiece(); // _ZN15StrongholdPieceD2Ev
    void findAndCreatePieceFactory(std::string const&, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN15StrongholdPiece25findAndCreatePieceFactoryERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteISA_EESaISD_EER6Randomiiiii
    void generatePieceFromSmallDoor(SHStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random const&, int, int, int, int, int); // _ZN15StrongholdPiece26generatePieceFromSmallDoorEP12SHStartPieceRSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS4_EESaIS7_EERK6Randomiiiii
    void generateAndAddPiece(SHStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN15StrongholdPiece19generateAndAddPieceEP12SHStartPieceRSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS4_EESaIS7_EER6Randomiiiii
//  void generateSmallDoor(BlockSource *, Random &, BoundingBox const&, StrongholdPiece::SmallDoorType, int, int, int); //TODO: incomplete function definition // _ZN15StrongholdPiece17generateSmallDoorEP11BlockSourceR6RandomRK11BoundingBoxNS_13SmallDoorTypeEiii
    void generateSmallDoorChildForward(SHStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int); // _ZN15StrongholdPiece29generateSmallDoorChildForwardEP12SHStartPieceRSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS4_EESaIS7_EER6Randomii
    void generateSmallDoorChildLeft(SHStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int); // _ZN15StrongholdPiece26generateSmallDoorChildLeftEP12SHStartPieceRSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS4_EESaIS7_EER6Randomii
    void generateSmallDoorChildRight(SHStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int); // _ZN15StrongholdPiece27generateSmallDoorChildRightEP12SHStartPieceRSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS4_EESaIS7_EER6Randomii
    void randomSmallDoor(Random &); // _ZN15StrongholdPiece15randomSmallDoorER6Random
    StrongholdPiece(); // _ZN15StrongholdPieceC2Ev
    StrongholdPiece(int); // _ZN15StrongholdPieceC2Ei
    bool isOkBox(BoundingBox const&); // _ZN15StrongholdPiece7isOkBoxERK11BoundingBox
};
