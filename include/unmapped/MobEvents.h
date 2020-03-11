#pragma once

#include "../bedrock/level/storage/LevelStorage.h"
#include "../bedrock/nbt/CompoundTag.h"
#include <string>


class MobEvents {

public:
    static std::string EVENTS_ENABLED_STRING;

    virtual ~MobEvents();

    MobEvents(LevelStorage &);
    void readFromLevelStorage();
    void tick();
    void writeToLevelStorage();
    void setMarketplaceDefaults();
//  void _getEventReference(MobEventsIndex); //TODO: incomplete function definition
//  bool isEnabled(MobEventsIndex)const; //TODO: incomplete function definition
//  void getEvent(MobEventsIndex)const; //TODO: incomplete function definition
//  void setEnabled(MobEventsIndex, bool); //TODO: incomplete function definition
    void _getMobEvents()const;
    void areEventsEnabled()const;
    void setEventsEnabled(bool);
    void getIndexFromName(std::string const&)const;
    void deserialize(CompoundTag const&);
    void serialize()const;
};
