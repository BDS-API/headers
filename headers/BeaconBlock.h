#pragma once

class BeaconBlock : ActorBlock {

public:
    virtual ~BeaconBlock();
    virtual bool isInteractiveBlock(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void use(Player &, BlockPos const&)const;

    void BeaconBlock(std::string const&, int);
};
