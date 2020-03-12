#pragma once

#include "../../../../util/Random.h"
#include "../StrongholdPiece.h"
#include "../../../../block/unmapped/BlockSource.h"
#include <vector>
#include <memory>
#include "../../../../../unmapped/BoundingBox.h"
#include "../StructurePiece.h"


class SHPortalRoom : StrongholdPiece {

public:
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    virtual void getType()const;
    ~SHPortalRoom();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    SHPortalRoom();
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    SHPortalRoom(int, BoundingBox const&, int);
};
