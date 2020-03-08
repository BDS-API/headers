#pragma once

#include "../nbt/CompoundTag"
#include "../actor/Actor"


class CommandBlockComponent {

public:

    CommandBlockComponent(CommandBlockComponent&&);
    CommandBlockComponent(void);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void initFromDefinition(Actor &);
    void getTicking(void)const;
    void setTicking(bool);
    void _updateTickCount(void);
    void getCurrentTickCount(void)const;
    void decrementTickCount(void);
    void getBaseCommandBlock(void)const;
    void getBaseCommandBlock(void);
    void setTrackOutput(Actor &, bool);
    void setName(Actor &, std::string const&);
    void onCommandBlockUpdate(Actor &, std::string const&, bool, std::string, int, bool);
    void setLastOutput(Actor &, std::string const&);
    void resetCurrentTick(void);
};
