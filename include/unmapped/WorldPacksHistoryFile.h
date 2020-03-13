#pragma once



class WorldPacksHistoryFile {

public:
    ~WorldPacksHistoryFile(); // _ZN21WorldPacksHistoryFileD2Ev
    WorldPacksHistoryFile(); // _ZN21WorldPacksHistoryFileC2Ev
    void initializeFromJson(Json::Value const&); // _ZN21WorldPacksHistoryFile18initializeFromJsonERKN4Json5ValueE
    void getPacks()const; // _ZNK21WorldPacksHistoryFile8getPacksEv
    void addPack(WorldPackHistory const&); // _ZN21WorldPacksHistoryFile7addPackERK16WorldPackHistory
    void toJsonValue()const; // _ZNK21WorldPacksHistoryFile11toJsonValueEv
    void setSourceUUIDForPackHistory(PackIdVersion const&, mce::UUID const&); // _ZN21WorldPacksHistoryFile27setSourceUUIDForPackHistoryERK13PackIdVersionRKN3mce4UUIDE
};
