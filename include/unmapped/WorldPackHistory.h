#pragma once

#include <utility>
#include "./WorldPackHistory.h"
#include <unordered_map>
#include "../mce/UUID.h"
#include "../json/Value.h"
#include "./PackIdVersion.h"
#include <memory>
#include <functional>
#include <string>


class WorldPackHistory {

public:

    ~WorldPackHistory();
    WorldPackHistory();
    void initializeFromJson(Json::Value const&);
    void setUnlocalizedName(std::string const&);
    void addLocalizedName(std::string const&, std::string const&);
    void getPackIdVersion()const;
    void setPackIdVersion(PackIdVersion const&);
    std::string getLocalizedNames()const;
    void getLocalizedName(std::string const&)const;
//  void setLocalizedNames(std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>>); //TODO: incomplete function definition
    bool hasLocalizedNames()const;
    std::string getUnlocalizedName()const;
    void getCanBeRedownloaded()const;
    void setCanBeRedownloaded(bool);
    void getSubpackCount()const;
    void setSubpackCount(int);
    bool hasSubpacks()const;
    void getSourceUUID()const;
    void setSourceUUID(mce::UUID const&);
    bool hasSourceUUID()const;
    void toJsonValue()const;
    void operator==(WorldPackHistory const&)const;
    WorldPackHistory(WorldPackHistory const&);
    WorldPackHistory(WorldPackHistory &&);
};
