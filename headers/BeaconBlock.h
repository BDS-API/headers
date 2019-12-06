#pragma once

class BeaconBlock : ActorBlock {

public:
    virtual ~BeaconBlock();
    virtual bool isInteractiveBlock(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void use(Player &, BlockPos const&)const;

    void BeaconBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
