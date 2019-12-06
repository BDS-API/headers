#pragma once

class NBBridgeCrossing : NetherFortressPiece {

public:
    virtual ~NBBridgeCrossing();
    virtual void getType(void)const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void createPiece(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    void NBBridgeCrossing(void);
    void NBBridgeCrossing(int, BoundingBox const&, int);
    void NBBridgeCrossing(Random &, int, int);
};
