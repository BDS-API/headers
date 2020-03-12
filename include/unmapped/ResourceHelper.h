#pragma once

#include <string>


namespace ResourceHelper {

    void toPackIdAnyVersion(PackIdVersion const&);
    void deserializePackStackEntry(Json::Value const&, PackInstanceId &, std::string const&);
    void serializePackStackEntry(PackInstanceId const&, Json::Value &);
};
