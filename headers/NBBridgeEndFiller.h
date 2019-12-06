#pragma once

class NBBridgeEndFiller : NetherFortressPiece {

public:
    virtual ~NBBridgeEndFiller();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void createPiece(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    void NBBridgeEndFiller(void);
    void NBBridgeEndFiller(int, Random &, BoundingBox const&, int);
};
