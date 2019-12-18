#pragma once

class EnchantingTableBlockActor : BlockActor {

public:
    virtual ~EnchantingTableBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getName[abi:cxx11](void)const;

    void EnchantingTableBlockActor(BlockPos const&);
};
