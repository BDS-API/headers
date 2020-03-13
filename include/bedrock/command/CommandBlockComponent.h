#pragma once

#include <string>


class CommandBlockComponent {

public:
    ~CommandBlockComponent(); // _ZN21CommandBlockComponentD2Ev
    CommandBlockComponent(CommandBlockComponent &&); // _ZN21CommandBlockComponentC2EOS_
    CommandBlockComponent(); // _ZN21CommandBlockComponentC2Ev
    void addAdditionalSaveData(CompoundTag &); // _ZN21CommandBlockComponent21addAdditionalSaveDataER11CompoundTag
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &); // _ZN21CommandBlockComponent22readAdditionalSaveDataER5ActorRK11CompoundTagR14DataLoadHelper
    void initFromDefinition(Actor &); // _ZN21CommandBlockComponent18initFromDefinitionER5Actor
    void getTicking()const; // _ZNK21CommandBlockComponent10getTickingEv
    void setTicking(bool); // _ZN21CommandBlockComponent10setTickingEb
    void _updateTickCount(); // _ZN21CommandBlockComponent16_updateTickCountEv
    void getCurrentTickCount()const; // _ZNK21CommandBlockComponent19getCurrentTickCountEv
    void decrementTickCount(); // _ZN21CommandBlockComponent18decrementTickCountEv
    void getBaseCommandBlock()const; // _ZNK21CommandBlockComponent19getBaseCommandBlockEv
    void getBaseCommandBlock(); // _ZN21CommandBlockComponent19getBaseCommandBlockEv
    void setTrackOutput(Actor &, bool); // _ZN21CommandBlockComponent14setTrackOutputER5Actorb
    void setName(Actor &, std::string const&); // _ZN21CommandBlockComponent7setNameER5ActorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void onCommandBlockUpdate(Actor &, std::string const&, bool, std::string, int, bool); // _ZN21CommandBlockComponent20onCommandBlockUpdateER5ActorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbS7_ib
    void setLastOutput(Actor &, std::string const&); // _ZN21CommandBlockComponent13setLastOutputER5ActorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void resetCurrentTick(); // _ZN21CommandBlockComponent16resetCurrentTickEv
};
