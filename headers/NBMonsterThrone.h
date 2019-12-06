#pragma once

class NBMonsterThrone : NetherFortressPiece {

public:
    virtual ~NBMonsterThrone();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void createPiece(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    void NBMonsterThrone(void);
    void NBMonsterThrone(int, BoundingBox const&, int);
};
