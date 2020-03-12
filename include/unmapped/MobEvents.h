#pragma once

#include "../bedrock/level/storage/LevelStorage.h"
#include <string>
#include "../bedrock/nbt/CompoundTag.h"


class MobEvents {

public:
    static std::string EVENTS_ENABLED_STRING;

    ~MobEvents();
//  void setEnabled(MobEventsIndex, bool); //TODO: incomplete function definition
    void writeToLevelStorage();
    void setMarketplaceDefaults();
    void areEventsEnabled()const;
//  void getEvent(MobEventsIndex)const; //TODO: incomplete function definition
    MobEvents(LevelStorage &);
//  bool isEnabled(MobEventsIndex)const; //TODO: incomplete function definition
    void getIndexFromName(std::string const&)const;
    void deserialize(CompoundTag const&);
    void _getMobEvents()const;
    void readFromLevelStorage();
    void tick();
//  void _getEventReference(MobEventsIndex); //TODO: incomplete function definition
    void setEventsEnabled(bool);
    void serialize()const;
};
