#pragma once



class WorldPacksHistoryFile {

public:
    void toJsonValue()const;
    void addPack(WorldPackHistory const&);
    void getPacks()const;
    void setSourceUUIDForPackHistory(PackIdVersion const&, mce::UUID const&);
    void initializeFromJson(Json::Value const&);
    WorldPacksHistoryFile();
    ~WorldPacksHistoryFile();
};
