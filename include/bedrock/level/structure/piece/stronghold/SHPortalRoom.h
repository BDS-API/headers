#pragma once

#include "../StrongholdPiece"
#include "../../../../../unmapped/BoundingBox"
#include "../../../../util/Random"
#include "../../../../block/unmapped/BlockSource"
#include "../StructurePiece"


class SHPortalRoom : StrongholdPiece {

public:
    SHPortalRoom::~SHPortalRoom()
    virtual void getType()const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void createPiece(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    SHPortalRoom(void);
    SHPortalRoom(int, BoundingBox const&, int);
};
