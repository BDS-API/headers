#pragma once

class MobEvents {

public:
    virtual ~MobEvents();

    void MobEvents(LevelStorage &);
    void readFromLevelStorage(void);
    void tick(void);
    void writeToLevelStorage(void);
    void setMarketplaceDefaults(void);
    void _getEventReference(MobEventsIndex);
    bool isEnabled(MobEventsIndex)const;
    void getEvent(MobEventsIndex)const;
    void setEnabled(MobEventsIndex, bool);
    void _getMobEvents(void)const;
    void areEventsEnabled(void)const;
    void setEventsEnabled(bool);
    void getIndexFromName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void deserialize(CompoundTag const&);
    void serialize(void)const;
};
