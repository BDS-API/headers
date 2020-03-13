#pragma once



class PackSettingsFactory {

public:
    void getPackSettings(PackManifest const&); // _ZN19PackSettingsFactory15getPackSettingsERK12PackManifest
    void loadPackSettings(PackIdVersion const&, Json::Value const&); // _ZN19PackSettingsFactory16loadPackSettingsERK13PackIdVersionRKN4Json5ValueE
    void savePackSettings(PackIdVersion const&); // _ZN19PackSettingsFactory16savePackSettingsERK13PackIdVersion
    PackSettingsFactory(); // _ZN19PackSettingsFactoryC2Ev
    ~PackSettingsFactory(); // _ZN19PackSettingsFactoryD2Ev
};
