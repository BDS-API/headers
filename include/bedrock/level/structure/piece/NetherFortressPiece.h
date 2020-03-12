#pragma once

#include <vector>
#include "../../../../unmapped/BoundingBox.h"
#include <string>
#include "StructurePiece.h"


class NetherFortressPiece : StructurePiece {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void addHardcodedSpawnAreas(LevelChunk &)const;
    ~NetherFortressPiece();
    NetherFortressPiece();
    void generateLightPostFacingRight(BlockSource *, Random &, BoundingBox const&, int, int, int);
    void generateLightPost(BlockSource *, Random &, BoundingBox const&, int, int, int, int, int);
    void generateChildRight(NBStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, bool);
    void generatePiece(NBStartPiece *, std::vector<PieceWeight> &, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    void generateChildLeft(NBStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, bool);
    void generateLightPostFacingUp(BlockSource *, Random &, BoundingBox const&, int, int, int);
    bool isOkBox(BoundingBox);
    void findAndCreateBridgePieceFactory(std::string const&, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    void generateAndAddPiece(NBStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int, bool);
    void generateChildForward(NBStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, bool);
    void updatePieceWeight(std::vector<PieceWeight> &);
    void generateLightPostFacingDown(BlockSource *, Random &, BoundingBox const&, int, int, int);
    void generateLightPostFacingLeft(BlockSource *, Random &, BoundingBox const&, int, int, int);
    NetherFortressPiece(int);
};
