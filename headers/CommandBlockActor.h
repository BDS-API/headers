#pragma once

class CommandBlockActor : BlockActor {

public:
    virtual ~CommandBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void saveBlockData(CompoundTag &, BlockSource &)const;
    virtual void loadBlockData(CompoundTag const&, BlockSource &, DataLoadHelper &);
    virtual void onCustomTagLoadDone(BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onPlace(BlockSource &);
    virtual void onUpdatePacket(CompoundTag const&, BlockSource &);

    void CommandBlockActor(BlockPos const&, CommandBlockMode);
    bool isAutomatic(void)const;
    void getBaseCommandBlock(void)const;
    void getCommandBlock(BlockSource &)const;
    void _loadAutomatic(bool);
    void getBaseCommandBlock(void);
    void getMode(BlockSource &)const;
    void _setAutomatic(BlockSource &, bool, CommandBlockMode);
    void _updateLastPerformedModes(bool, bool, CommandBlockMode);
    void markConditionMet(BlockSource &);
    void getDelayOnActivation(void)const;
    void performCommand(BlockSource &);
    void markForSaving(BlockSource &);
    void getTrackOutput(void)const;
    void getConditionalMode(BlockSource &)const;
    bool isRedstoneMode(void)const;
    void updateBlock(BlockSource &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, CommandBlockMode, bool, bool, bool, int, bool);
    void setAutomatic(BlockSource &, bool, CommandBlockMode);
    void setCustomName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void setPowered(bool);
    void getPowered(void)const;
    void getTickDelay(void)const;
    void shouldExecuteOnFirstTick(void)const;
    void wasConditionMet(void);
    void getSuccessCount(void)const;
    void setSuccessCount(int);
    void setTrackOutput(bool);
    void getLastPerformedConditionalMode(void)const;
    void getLastPerformedRedstoneMode(void)const;
    void getLastPerformedCBMode(void)const;
    void markForSaving(BlockSource &, int, bool);
};
