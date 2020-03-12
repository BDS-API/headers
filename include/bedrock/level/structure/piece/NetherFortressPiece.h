#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "../../../../unmapped/PieceWeight.h"
#include <string>
#include "StructurePiece.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"
#include <vector>
#include <memory>
#include "NBStartPiece.h"
#include "../../LevelChunk.h"


class NetherFortressPiece : StructurePiece {

public:
    virtual void addHardcodedSpawnAreas(LevelChunk &)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~NetherFortressPiece();
    void updatePieceWeight(std::vector<PieceWeight> &);
    bool isOkBox(BoundingBox);
    void generateAndAddPiece(NBStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int, bool);
    void generateChildForward(NBStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, bool);
    void generateChildRight(NBStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, bool);
    void findAndCreateBridgePieceFactory(std::string const&, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    NetherFortressPiece();
    void generateLightPostFacingRight(BlockSource *, Random &, BoundingBox const&, int, int, int);
    void generateLightPostFacingLeft(BlockSource *, Random &, BoundingBox const&, int, int, int);
    void generateLightPostFacingDown(BlockSource *, Random &, BoundingBox const&, int, int, int);
    void generateLightPostFacingUp(BlockSource *, Random &, BoundingBox const&, int, int, int);
    void generateChildLeft(NBStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, bool);
    NetherFortressPiece(int);
    void generateLightPost(BlockSource *, Random &, BoundingBox const&, int, int, int, int, int);
    void generatePiece(NBStartPiece *, std::vector<PieceWeight> &, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
};
