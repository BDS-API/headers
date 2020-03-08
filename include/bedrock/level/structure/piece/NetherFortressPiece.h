#pragma once

#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"
#include "../../LevelChunk"
#include "../../../../unmapped/BoundingBox"
#include "../../../../unmapped/PieceWeight"


class NetherFortressPiece : StructurePiece {

public:
    virtual NetherFortressPiece::~NetherFortressPiece()
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void addHardcodedSpawnAreas(LevelChunk &)const;

    NetherFortressPiece(void);
    NetherFortressPiece(int);
    void updatePieceWeight(std::vector<PieceWeight, std::allocator<PieceWeight>> &);
    void findAndCreateBridgePieceFactory(std::string const&, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    void generatePiece(NBStartPiece *, std::vector<PieceWeight, std::allocator<PieceWeight>> &, std::vector&<std::unique_ptr<StructurePiece, std::default_delete<std::unique_ptr>>, std::allocator<std::default_delete<std::unique_ptr>>>, Random &, int, int, int, int, int);
    void generateAndAddPiece(NBStartPiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int, bool);
    void generateChildForward(NBStartPiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, bool);
    void generateChildLeft(NBStartPiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, bool);
    void generateChildRight(NBStartPiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, bool);
    void generateLightPost(BlockSource *, Random &, BoundingBox const&, int, int, int, int, int);
    void generateLightPostFacingRight(BlockSource *, Random &, BoundingBox const&, int, int, int);
    void generateLightPostFacingLeft(BlockSource *, Random &, BoundingBox const&, int, int, int);
    void generateLightPostFacingUp(BlockSource *, Random &, BoundingBox const&, int, int, int);
    void generateLightPostFacingDown(BlockSource *, Random &, BoundingBox const&, int, int, int);
    bool isOkBox(BoundingBox);
};
