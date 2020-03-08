#pragma once

#include "../../../../../unmapped/BoundingBox"
#include "../../../../../unmapped/BlockSource"
#include "../StrongholdPiece"
#include "../StructurePiece"


class SHPortalRoom : StrongholdPiece {

public:
    virtual SHPortalRoom::~SHPortalRoom();
    virtual void getType(void)const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void createPiece(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    SHPortalRoom(void);
    SHPortalRoom(int, BoundingBox const&, int);
};
