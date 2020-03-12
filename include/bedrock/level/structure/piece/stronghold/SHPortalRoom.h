#pragma once

#include <vector>
#include "../StrongholdPiece.h"


class SHPortalRoom : StrongholdPiece {

public:
    ~SHPortalRoom();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    SHPortalRoom();
    SHPortalRoom(int, BoundingBox const&, int);
};
