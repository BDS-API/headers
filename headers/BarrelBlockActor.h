#pragma once

class BarrelBlockActor : ChestBlockActor {

public:
    virtual ~BarrelBlockActor();
    virtual void onPlace(BlockSource &);
    virtual void getName[abi:cxx11](void)const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);
    virtual void playOpenSound(BlockSource &);
    virtual void playCloseSound(BlockSource &);

    void BarrelBlockActor(BlockPos const&);
};
