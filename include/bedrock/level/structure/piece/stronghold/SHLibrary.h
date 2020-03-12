#pragma once

#include "../../../../util/Random.h"
#include "../StrongholdPiece.h"
#include "../../../../block/unmapped/BlockSource.h"
#include <vector>
#include <memory>
#include "../../../../../unmapped/BoundingBox.h"
#include "../StructurePiece.h"


class SHLibrary : StrongholdPiece {

public:
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~SHLibrary();
    virtual void getType()const;
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    SHLibrary();
    SHLibrary(int, Random &, BoundingBox const&, int);
};
