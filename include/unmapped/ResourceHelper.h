#pragma once

#include <string>


namespace ResourceHelper {

    void deserializePackStackEntry(Json::Value const&, PackInstanceId &, std::string const&); // _ZN14ResourceHelper25deserializePackStackEntryERKN4Json5ValueER14PackInstanceIdRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void serializePackStackEntry(PackInstanceId const&, Json::Value &); // _ZN14ResourceHelper23serializePackStackEntryERK14PackInstanceIdRN4Json5ValueE
    void toPackIdAnyVersion(PackIdVersion const&); // _ZN14ResourceHelper18toPackIdAnyVersionERK13PackIdVersion
};
