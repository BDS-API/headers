#pragma once

#include "../mce/UUID"
#include "../json/Value"


class WorldPackHistory {

public:

    WorldPackHistory(void);
    void initializeFromJson(Json::Value const&);
    void setUnlocalizedName(std::string const&);
    void addLocalizedName(std::string const&, std::string const&);
    void getPackIdVersion()const;
    void setPackIdVersion(PackIdVersion const&);
    void getLocalizedName(std::string const&)const;
    void setLocalizedNames(std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>>);
    bool hasLocalizedNames()const;
    void getCanBeRedownloaded()const;
    void setCanBeRedownloaded(bool);
    void getSubpackCount()const;
    void setSubpackCount(int);
    bool hasSubpacks()const;
    void getSourceUUID()const;
    void setSourceUUID(mce::UUID const&);
    bool hasSourceUUID()const;
    void toJsonValue()const;
    WorldPackHistory(WorldPackHistory const&);
    WorldPackHistory(WorldPackHistory&&);
};
