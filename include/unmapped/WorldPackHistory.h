#pragma once

#include <string>
#include <unordered_map>


class WorldPackHistory {

public:
    std::string getUnlocalizedName()const;
    bool hasLocalizedNames()const;
    void initializeFromJson(Json::Value const&);
    void getCanBeRedownloaded()const;
    void setUnlocalizedName(std::string const&);
    void setLocalizedNames(std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>>);
    void toJsonValue()const;
    ~WorldPackHistory();
    void getSourceUUID()const;
    bool hasSubpacks()const;
    void getLocalizedName(std::string const&)const;
    void getSubpackCount()const;
    void addLocalizedName(std::string const&, std::string const&);
    WorldPackHistory(WorldPackHistory const&);
    void setPackIdVersion(PackIdVersion const&);
    void setSubpackCount(int);
    void operator==(WorldPackHistory const&)const;
    std::string getLocalizedNames()const;
    bool hasSourceUUID()const;
    void getPackIdVersion()const;
    void setCanBeRedownloaded(bool);
    void setSourceUUID(mce::UUID const&);
    WorldPackHistory(WorldPackHistory &&);
    WorldPackHistory();
};
