#pragma once

class HangingActorItem : Item {

public:
    virtual ~HangingActorItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void HangingActorItem(std::string const&, int, ActorType);
};
