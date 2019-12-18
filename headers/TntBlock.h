#pragma once

class TntBlock : BlockLegacy {

public:
    virtual ~TntBlock();
    virtual void shouldDispense(BlockSource &, Container &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onExploded(BlockSource &, BlockPos const&, Actor *)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void destroy(BlockSource &, BlockPos const&, Block const&, Actor *)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getVariant(Block const&)const;

    void TntBlock(std::string const&, int);
    void _shouldAllowUnderwater(Block const&)const;
    void _setAllowUnderwater(Actor *)const;
};
