#pragma once

#include "../json/Value"


class ResourceHelper {

public:

    void deserializePackStackEntry(Json::Value const&, PackInstanceId &, std::string const&);
    void serializePackStackEntry(PackInstanceId const&, Json::Value &);
    void toPackIdAnyVersion(PackIdVersion const&);
};
