#pragma once

#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"
#include "../../../../unmapped/BoundingBox"


class NBBridgeCrossing : NetherFortressPiece {

public:
    virtual NBBridgeCrossing::~NBBridgeCrossing()
    virtual void getType()const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void createPiece(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    NBBridgeCrossing(void);
    NBBridgeCrossing(int, BoundingBox const&, int);
    NBBridgeCrossing(Random &, int, int);
};
