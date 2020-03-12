#pragma once

#include "../json/Value.h"
#include "WorldPackHistory.h"
#include "PackIdVersion.h"
#include "../mce/UUID.h"


class WorldPacksHistoryFile {

public:
    void getPacks()const;
    void setSourceUUIDForPackHistory(PackIdVersion const&, mce::UUID const&);
    void toJsonValue()const;
    WorldPacksHistoryFile();
    void addPack(WorldPackHistory const&);
    ~WorldPacksHistoryFile();
    void initializeFromJson(Json::Value const&);
};
