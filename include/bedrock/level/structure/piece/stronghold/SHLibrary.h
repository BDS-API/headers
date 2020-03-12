#pragma once

#include <vector>
#include "../StrongholdPiece.h"


class SHLibrary : StrongholdPiece {

public:
    ~SHLibrary();
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;
    SHLibrary();
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    SHLibrary(int, Random &, BoundingBox const&, int);
};
