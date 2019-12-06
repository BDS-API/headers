#pragma once

class FlowerPotBlockActor : BlockActor {

public:
    virtual ~FlowerPotBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onUpdatePacket(CompoundTag const&, BlockSource &);

    void FlowerPotBlockActor(BlockPos const&);
    void setPlantItem(Block const*);
    void getPlantItem(void)const;
};
