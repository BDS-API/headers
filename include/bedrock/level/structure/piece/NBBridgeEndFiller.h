#pragma once

#include "../../../../unmapped/BoundingBox"
#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"


class NBBridgeEndFiller : NetherFortressPiece {

public:
    NBBridgeEndFiller::~NBBridgeEndFiller()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void createPiece(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    NBBridgeEndFiller(void);
    NBBridgeEndFiller(int, Random &, BoundingBox const&, int);
};
