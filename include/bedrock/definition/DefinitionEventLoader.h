#pragma once

#include "../../json/Value"


class DefinitionEventLoader {

public:

    void loadEvent(Json::Value);
    void loadCollection(Json::Value);
};
