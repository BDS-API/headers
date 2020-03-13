#pragma once

#include <string>
#include <unordered_map>


class WorldPackHistory {

public:
    ~WorldPackHistory(); // _ZN16WorldPackHistoryD2Ev
    WorldPackHistory(); // _ZN16WorldPackHistoryC2Ev
    void initializeFromJson(Json::Value const&); // _ZN16WorldPackHistory18initializeFromJsonERKN4Json5ValueE
    void setUnlocalizedName(std::string const&); // _ZN16WorldPackHistory18setUnlocalizedNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void addLocalizedName(std::string const&, std::string const&); // _ZN16WorldPackHistory16addLocalizedNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    void getPackIdVersion()const; // _ZNK16WorldPackHistory16getPackIdVersionEv
    void setPackIdVersion(PackIdVersion const&); // _ZN16WorldPackHistory16setPackIdVersionERK13PackIdVersion
    std::string getLocalizedNames()const; // _ZNK16WorldPackHistory17getLocalizedNamesB5cxx11Ev
    void getLocalizedName(std::string const&)const; // _ZNK16WorldPackHistory16getLocalizedNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setLocalizedNames(std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>>); // _ZN16WorldPackHistory17setLocalizedNamesESt13unordered_mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_St4hashIS6_ESt8equal_toIS6_ESaISt4pairIKS6_S6_EEE
    bool hasLocalizedNames()const; // _ZNK16WorldPackHistory17hasLocalizedNamesEv
    std::string getUnlocalizedName()const; // _ZNK16WorldPackHistory18getUnlocalizedNameB5cxx11Ev
    void getCanBeRedownloaded()const; // _ZNK16WorldPackHistory20getCanBeRedownloadedEv
    void setCanBeRedownloaded(bool); // _ZN16WorldPackHistory20setCanBeRedownloadedEb
    void getSubpackCount()const; // _ZNK16WorldPackHistory15getSubpackCountEv
    void setSubpackCount(int); // _ZN16WorldPackHistory15setSubpackCountEi
    bool hasSubpacks()const; // _ZNK16WorldPackHistory11hasSubpacksEv
    void getSourceUUID()const; // _ZNK16WorldPackHistory13getSourceUUIDEv
    void setSourceUUID(mce::UUID const&); // _ZN16WorldPackHistory13setSourceUUIDERKN3mce4UUIDE
    bool hasSourceUUID()const; // _ZNK16WorldPackHistory13hasSourceUUIDEv
    void toJsonValue()const; // _ZNK16WorldPackHistory11toJsonValueEv
    void operator==(WorldPackHistory const&)const; // _ZNK16WorldPackHistoryeqERKS_
    WorldPackHistory(WorldPackHistory const&); // _ZN16WorldPackHistoryC2ERKS_
    WorldPackHistory(WorldPackHistory &&); // _ZN16WorldPackHistoryC2EOS_
};
