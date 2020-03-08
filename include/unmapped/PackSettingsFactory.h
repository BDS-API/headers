#pragma once

#include "../bedrock/pack/PackManifest"
#include "../json/Value"


class PackSettingsFactory {

public:

    void getPackSettings(PackManifest const&);
    void loadPackSettings(PackIdVersion const&, Json::Value const&);
    void savePackSettings(PackIdVersion const&);
    PackSettingsFactory(void);
};
