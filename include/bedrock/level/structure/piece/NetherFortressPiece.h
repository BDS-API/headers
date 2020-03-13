#pragma once

#include <string>
#include "../../../../unmapped/BoundingBox.h"
#include "StructurePiece.h"
#include <vector>


class NetherFortressPiece : StructurePiece {

public:
    ~NetherFortressPiece(); // _ZN19NetherFortressPieceD2Ev
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN19NetherFortressPiece11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    virtual void addHardcodedSpawnAreas(LevelChunk &)const; // _ZNK19NetherFortressPiece22addHardcodedSpawnAreasER10LevelChunk
    NetherFortressPiece(); // _ZN19NetherFortressPieceC2Ev
    NetherFortressPiece(int); // _ZN19NetherFortressPieceC2Ei
    void updatePieceWeight(std::vector<PieceWeight> &); // _ZN19NetherFortressPiece17updatePieceWeightERSt6vectorI11PieceWeightSaIS1_EE
    void findAndCreateBridgePieceFactory(std::string const&, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN19NetherFortressPiece31findAndCreateBridgePieceFactoryERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteISA_EESaISD_EER6Randomiiiii
    void generatePiece(NBStartPiece *, std::vector<PieceWeight> &, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN19NetherFortressPiece13generatePieceEP12NBStartPieceRSt6vectorI11PieceWeightSaIS3_EERS2_ISt10unique_ptrI14StructurePieceSt14default_deleteIS8_EESaISB_EER6Randomiiiii
    void generateAndAddPiece(NBStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int, bool); // _ZN19NetherFortressPiece19generateAndAddPieceEP12NBStartPieceRSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS4_EESaIS7_EER6Randomiiiiib
    void generateChildForward(NBStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, bool); // _ZN19NetherFortressPiece20generateChildForwardEP12NBStartPieceRSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS4_EESaIS7_EER6Randomiib
    void generateChildLeft(NBStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, bool); // _ZN19NetherFortressPiece17generateChildLeftEP12NBStartPieceRSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS4_EESaIS7_EER6Randomiib
    void generateChildRight(NBStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, bool); // _ZN19NetherFortressPiece18generateChildRightEP12NBStartPieceRSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS4_EESaIS7_EER6Randomiib
    void generateLightPost(BlockSource *, Random &, BoundingBox const&, int, int, int, int, int); // _ZN19NetherFortressPiece17generateLightPostEP11BlockSourceR6RandomRK11BoundingBoxiiiii
    void generateLightPostFacingRight(BlockSource *, Random &, BoundingBox const&, int, int, int); // _ZN19NetherFortressPiece28generateLightPostFacingRightEP11BlockSourceR6RandomRK11BoundingBoxiii
    void generateLightPostFacingLeft(BlockSource *, Random &, BoundingBox const&, int, int, int); // _ZN19NetherFortressPiece27generateLightPostFacingLeftEP11BlockSourceR6RandomRK11BoundingBoxiii
    void generateLightPostFacingUp(BlockSource *, Random &, BoundingBox const&, int, int, int); // _ZN19NetherFortressPiece25generateLightPostFacingUpEP11BlockSourceR6RandomRK11BoundingBoxiii
    void generateLightPostFacingDown(BlockSource *, Random &, BoundingBox const&, int, int, int); // _ZN19NetherFortressPiece27generateLightPostFacingDownEP11BlockSourceR6RandomRK11BoundingBoxiii
    bool isOkBox(BoundingBox); // _ZN19NetherFortressPiece7isOkBoxE11BoundingBox
};
