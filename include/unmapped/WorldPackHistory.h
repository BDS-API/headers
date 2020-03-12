#pragma once

#include <string>
#include <unordered_map>
#include "PackIdVersion.h"
#include "../json/Value.h"
#include <functional>
#include <memory>
#include "../mce/UUID.h"
#include <utility>


class WorldPackHistory {

public:
    void getCanBeRedownloaded()const;
    bool hasLocalizedNames()const;
    void getLocalizedName(std::string const&)const;
    void getPackIdVersion()const;
    void setCanBeRedownloaded(bool);
    bool hasSourceUUID()const;
    void initializeFromJson(Json::Value const&);
    void setUnlocalizedName(std::string const&);
    std::string getLocalizedNames()const;
    void setPackIdVersion(PackIdVersion const&);
    std::string getUnlocalizedName()const;
    void getSourceUUID()const;
    WorldPackHistory(WorldPackHistory const&);
    WorldPackHistory(WorldPackHistory &&);
    WorldPackHistory();
    void toJsonValue()const;
    void getSubpackCount()const;
    ~WorldPackHistory();
    bool hasSubpacks()const;
//  void setLocalizedNames(std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>>); //TODO: incomplete function definition
    void setSubpackCount(int);
    void addLocalizedName(std::string const&, std::string const&);
    void setSourceUUID(mce::UUID const&);
    void operator==(WorldPackHistory const&)const;
};
