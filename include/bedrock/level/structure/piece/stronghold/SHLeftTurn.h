#pragma once

#include "../../../../util/Random"
#include "../../../../block/unmapped/BlockSource"
#include "../StructurePiece"
#include "../../../../../unmapped/BoundingBox"
#include "../StrongholdPiece"


class SHLeftTurn : StrongholdPiece {

public:
    virtual SHLeftTurn::~SHLeftTurn()
    virtual void getType()const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void createPiece(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    SHLeftTurn(void);
    SHLeftTurn(int, Random &, BoundingBox const&, int);
};
