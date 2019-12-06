#pragma once

class BellBlockActor : BlockActor {

public:
    virtual ~BellBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onUpdatePacket(CompoundTag const&, BlockSource &);

    void BellBlockActor(BlockPos const&);
    void ring(Direction::Type, BlockSource &, bool);
    void ejectItem(BlockPos const&, Actor &)const;
    bool isRinging(void)const;
};
