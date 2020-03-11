#pragma once

#include "./PackIdVersion.h"
#include "../bedrock/pack/PackManifest.h"
#include "../json/Value.h"


class PackSettingsFactory {

public:

    void getPackSettings(PackManifest const&);
    void loadPackSettings(PackIdVersion const&, Json::Value const&);
    void savePackSettings(PackIdVersion const&);
    PackSettingsFactory();
    ~PackSettingsFactory();
};
