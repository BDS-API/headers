#pragma once

class SkullBlockActor : BlockActor {

public:
    virtual ~SkullBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onUpdatePacket(CompoundTag const&, BlockSource &);

    void SkullBlockActor(BlockPos const&);
    void getSkullType(void)const;
    void setSkullType(SkullBlockActor::SkullType);
    void setSkullType(int);
    void getRotation(void)const;
    void setRotation(float);
    void getMouthAnimation(float);
};
