#pragma once



class PackSettingsFactory {

public:
    ~PackSettingsFactory();
    void loadPackSettings(PackIdVersion const&, Json::Value const&);
    PackSettingsFactory();
    void savePackSettings(PackIdVersion const&);
    void getPackSettings(PackManifest const&);
};
