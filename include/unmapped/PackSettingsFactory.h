#pragma once

#include "../bedrock/pack/PackManifest.h"
#include "PackIdVersion.h"
#include "../json/Value.h"


class PackSettingsFactory {

public:
    void getPackSettings(PackManifest const&);
    void savePackSettings(PackIdVersion const&);
    PackSettingsFactory();
    void loadPackSettings(PackIdVersion const&, Json::Value const&);
    ~PackSettingsFactory();
};
