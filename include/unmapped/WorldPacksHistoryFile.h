#pragma once

#include "../json/Value"


class WorldPacksHistoryFile {

public:

    WorldPacksHistoryFile(void);
    void initializeFromJson(Json::Value const&);
    void getPacks(void)const;
    void addPack(WorldPackHistory const&);
    void toJsonValue(void)const;
    void setSourceUUIDForPackHistory(PackIdVersion const&, mce::UUID const&);
};
