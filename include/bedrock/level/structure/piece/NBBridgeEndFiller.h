#pragma once

#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"
#include "../../../../unmapped/BoundingBox"


class NBBridgeEndFiller : NetherFortressPiece {

public:
    virtual NBBridgeEndFiller::~NBBridgeEndFiller()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void createPiece(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    NBBridgeEndFiller(void);
    NBBridgeEndFiller(int, Random &, BoundingBox const&, int);
};
