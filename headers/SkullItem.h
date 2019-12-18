#pragma once

class SkullItem : Item {

public:
    virtual ~SkullItem();
    virtual void getBlockShape(void)const;
    virtual void getLevelDataForAuxValue(int)const;
    virtual bool isValidAuxValue(int)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void buildDescriptionId[abi:cxx11](ItemDescriptor const&,std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>> const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void getAuxValuesDescription[abi:cxx11](void)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void SkullItem(std::string const&, int);
    void _canDispense(BlockSource &, Vec3 const&, unsigned char)const;
};
