#pragma once

#include "../mce/UUID"
#include "../json/Value"


class WorldPacksHistoryFile {

public:

    WorldPacksHistoryFile(void);
    void initializeFromJson(Json::Value const&);
    void getPacks()const;
    void addPack(WorldPackHistory const&);
    void toJsonValue()const;
    void setSourceUUIDForPackHistory(PackIdVersion const&, mce::UUID const&);
};
