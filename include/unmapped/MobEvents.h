#pragma once

#include <string>


class MobEvents {

public:
    static std::string EVENTS_ENABLED_STRING;

    ~MobEvents();
    void readFromLevelStorage();
    void setMarketplaceDefaults();
//  bool isEnabled(MobEventsIndex)const; //TODO: incomplete function definition
    void writeToLevelStorage();
//  void setEnabled(MobEventsIndex, bool); //TODO: incomplete function definition
    void deserialize(CompoundTag const&);
//  void getEvent(MobEventsIndex)const; //TODO: incomplete function definition
    void setEventsEnabled(bool);
    void tick();
    MobEvents(LevelStorage &);
    void _getMobEvents()const;
    void serialize()const;
//  void _getEventReference(MobEventsIndex); //TODO: incomplete function definition
    void areEventsEnabled()const;
    void getIndexFromName(std::string const&)const;
};
