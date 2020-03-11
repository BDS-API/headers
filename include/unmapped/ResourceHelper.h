#pragma once

#include "./PackInstanceId.h"
#include "../json/Value.h"
#include "./PackIdVersion.h"
#include <string>


class ResourceHelper {

public:

    void deserializePackStackEntry(Json::Value const&, PackInstanceId &, std::string const&);
    void serializePackStackEntry(PackInstanceId const&, Json::Value &);
    void toPackIdAnyVersion(PackIdVersion const&);
};
