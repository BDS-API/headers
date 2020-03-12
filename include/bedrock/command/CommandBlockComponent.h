#pragma once

#include <string>


class CommandBlockComponent {

public:
    void setTrackOutput(Actor &, bool);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void setTicking(bool);
    void resetCurrentTick();
    void getTicking()const;
    void setName(Actor &, std::string const&);
    void initFromDefinition(Actor &);
    void _updateTickCount();
    void decrementTickCount();
    ~CommandBlockComponent();
    void getBaseCommandBlock()const;
    void setLastOutput(Actor &, std::string const&);
    CommandBlockComponent();
    void getCurrentTickCount()const;
    void onCommandBlockUpdate(Actor &, std::string const&, bool, std::string, int, bool);
    void addAdditionalSaveData(CompoundTag &);
    void getBaseCommandBlock();
    CommandBlockComponent(CommandBlockComponent &&);
};
