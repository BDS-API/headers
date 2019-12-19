#pragma once

class WorldPackHistory {

public:

    WorldPackHistory(void);
    void initializeFromJson(Json::Value const&);
    void setUnlocalizedName(std::string const&);
    void addLocalizedName(std::string const&, std::string const&);
    void getPackIdVersion(void)const;
    void setPackIdVersion(PackIdVersion const&);
    void getLocalizedName(std::string const&)const;
    void setLocalizedNames(std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>>);
    bool hasLocalizedNames(void)const;
    void getCanBeRedownloaded(void)const;
    void setCanBeRedownloaded(bool);
    void getSubpackCount(void)const;
    void setSubpackCount(int);
    bool hasSubpacks(void)const;
    void getSourceUUID(void)const;
    void setSourceUUID(mce::UUID const&);
    bool hasSourceUUID(void)const;
    void toJsonValue(void)const;
    WorldPackHistory(WorldPackHistory const&);
    WorldPackHistory(WorldPackHistory&&);
};
