#pragma once

#include "../actor/Actor"
#include "../nbt/CompoundTag"
#include "../../unmapped/DataLoadHelper"


class CommandBlockComponent {

public:

    CommandBlockComponent(CommandBlockComponent&&);
    CommandBlockComponent(void);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void initFromDefinition(Actor &);
    void getTicking()const;
    void setTicking(bool);
    void _updateTickCount();
    void getCurrentTickCount()const;
    void decrementTickCount();
    void getBaseCommandBlock()const;
    void getBaseCommandBlock();
    void setTrackOutput(Actor &, bool);
    void setName(Actor &, std::string const&);
    void onCommandBlockUpdate(Actor &, std::string const&, bool, std::string, int, bool);
    void setLastOutput(Actor &, std::string const&);
    void resetCurrentTick();
};
