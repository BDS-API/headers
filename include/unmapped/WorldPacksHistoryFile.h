#pragma once

#include "../mce/UUID.h"
#include "./PackIdVersion.h"
#include "./WorldPackHistory.h"
#include "../json/Value.h"


class WorldPacksHistoryFile {

public:

    ~WorldPacksHistoryFile();
    WorldPacksHistoryFile();
    void initializeFromJson(Json::Value const&);
    void getPacks()const;
    void addPack(WorldPackHistory const&);
    void toJsonValue()const;
    void setSourceUUIDForPackHistory(PackIdVersion const&, mce::UUID const&);
};
