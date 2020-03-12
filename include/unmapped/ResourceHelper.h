#pragma once

#include <string>
#include "PackIdVersion.h"
#include "PackInstanceId.h"
#include "../json/Value.h"


namespace ResourceHelper {

    void toPackIdAnyVersion(PackIdVersion const&);
    void deserializePackStackEntry(Json::Value const&, PackInstanceId &, std::string const&);
    void serializePackStackEntry(PackInstanceId const&, Json::Value &);
};
