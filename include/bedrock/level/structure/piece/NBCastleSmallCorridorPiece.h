#pragma once

#include "../../../../unmapped/BoundingBox"
#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"


class NBCastleSmallCorridorPiece : NetherFortressPiece {

public:
    NBCastleSmallCorridorPiece::~NBCastleSmallCorridorPiece()
    virtual void getType()const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void createPiece(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    NBCastleSmallCorridorPiece(void);
    NBCastleSmallCorridorPiece(int, BoundingBox const&, int);
};
