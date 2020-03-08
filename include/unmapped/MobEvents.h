#pragma once

#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/level/storage/LevelStorage"


class MobEvents {

public:
    static long EVENTS_ENABLED_STRING[abi:cxx11];

    virtual MobEvents::~MobEvents()

    MobEvents(LevelStorage &);
    void readFromLevelStorage();
    void tick();
    void writeToLevelStorage();
    void setMarketplaceDefaults();
    void _getEventReference(MobEventsIndex);
    bool isEnabled(MobEventsIndex)const;
    void getEvent(MobEventsIndex)const;
    void setEnabled(MobEventsIndex, bool);
    void _getMobEvents()const;
    void areEventsEnabled()const;
    void setEventsEnabled(bool);
    void getIndexFromName(std::string const&)const;
    void deserialize(CompoundTag const&);
    void serialize()const;
};
