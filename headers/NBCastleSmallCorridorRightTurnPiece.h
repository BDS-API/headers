#pragma once

class NBCastleSmallCorridorRightTurnPiece : NetherFortressPiece {

public:
    virtual ~NBCastleSmallCorridorRightTurnPiece();
    virtual void getType(void)const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void createPiece(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    void NBCastleSmallCorridorRightTurnPiece(void);
    void NBCastleSmallCorridorRightTurnPiece(int, Random &, BoundingBox const&, int);
};
