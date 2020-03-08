#pragma once

#include "../bedrock/level/storage/LevelStorage"
#include "../bedrock/nbt/CompoundTag"


class MobEvents {

public:
    static long EVENTS_ENABLED_STRING[abi:cxx11];

    MobEvents::~MobEvents()

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
