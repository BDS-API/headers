#pragma once

#include <string>


class MobEvents {

public:
    static std::string EVENTS_ENABLED_STRING;

    virtual ~MobEvents(); // _ZN9MobEventsD2Ev
    virtual void __fake_function0(); // fake
    MobEvents(LevelStorage &); // _ZN9MobEventsC2ER12LevelStorage
    void readFromLevelStorage(); // _ZN9MobEvents20readFromLevelStorageEv
    void tick(); // _ZN9MobEvents4tickEv
    void writeToLevelStorage(); // _ZN9MobEvents19writeToLevelStorageEv
    void setMarketplaceDefaults(); // _ZN9MobEvents22setMarketplaceDefaultsEv
//    void _getEventReference(long); //TODO: incomplete function definition // _ZN9MobEvents18_getEventReferenceE14MobEventsIndex
//    bool isEnabled(long)const; //TODO: incomplete function definition // _ZNK9MobEvents9isEnabledE14MobEventsIndex
//    void getEvent(long)const; //TODO: incomplete function definition // _ZNK9MobEvents8getEventE14MobEventsIndex
//    void setEnabled(long, bool); //TODO: incomplete function definition // _ZN9MobEvents10setEnabledE14MobEventsIndexb
    void _getMobEvents()const; // _ZNK9MobEvents13_getMobEventsEv
    void areEventsEnabled()const; // _ZNK9MobEvents16areEventsEnabledEv
    void setEventsEnabled(bool); // _ZN9MobEvents16setEventsEnabledEb
    void getIndexFromName(std::string const&)const; // _ZNK9MobEvents16getIndexFromNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void deserialize(CompoundTag const&); // _ZN9MobEvents11deserializeERK11CompoundTag
    void serialize()const; // _ZNK9MobEvents9serializeEv
};
