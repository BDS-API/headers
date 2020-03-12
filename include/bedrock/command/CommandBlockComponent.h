#pragma once

#include <string>
#include "../nbt/CompoundTag.h"
#include "../../unmapped/DataLoadHelper.h"
#include "../actor/Actor.h"


class CommandBlockComponent {

public:
    CommandBlockComponent();
    ~CommandBlockComponent();
    CommandBlockComponent(CommandBlockComponent &&);
    void setName(Actor &, std::string const&);
    void resetCurrentTick();
    void getTicking()const;
    void setTicking(bool);
    void decrementTickCount();
    void setTrackOutput(Actor &, bool);
    void getBaseCommandBlock()const;
    void setLastOutput(Actor &, std::string const&);
    void initFromDefinition(Actor &);
    void addAdditionalSaveData(CompoundTag &);
    void getCurrentTickCount()const;
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void _updateTickCount();
    void getBaseCommandBlock();
    void onCommandBlockUpdate(Actor &, std::string const&, bool, std::string, int, bool);
};
