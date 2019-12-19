#pragma once

class JukeboxBlock : ActorBlock {

public:
    virtual JukeboxBlock::~JukeboxBlock();
    virtual bool isSignalSource(void)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool hasComparatorSignal(void)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;

    JukeboxBlock(std::string const&, int);
    void _installCircuit(BlockSource &, BlockPos const&)const;
    void _getJukeboxBlockEntity(BlockSource &, BlockPos const&)const;
    void _dropRecording(BlockSource &, BlockPos const&)const;
    void _setRecord(BlockSource &, BlockPos const&, ItemStack const&)const;
};
