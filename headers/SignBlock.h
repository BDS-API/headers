#pragma once

class SignBlock : ActorBlock {

public:
    virtual ~SignBlock();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;

    void SignBlock(std::string const&, int, bool, SignBlockActor::SignType);
    void getShape(int, AABB &)const;
    void _getItemInstance(void)const;
    void getSignType(void)const;
};
