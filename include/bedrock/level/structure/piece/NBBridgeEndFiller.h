#pragma once

#include "../../../../unmapped/BlockSource"
#include "../../../../unmapped/Random"


class NBBridgeEndFiller : NetherFortressPiece {

public:
    virtual NBBridgeEndFiller::~NBBridgeEndFiller();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void createPiece(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    NBBridgeEndFiller(void);
    NBBridgeEndFiller(int, Random &, BoundingBox const&, int);
};
