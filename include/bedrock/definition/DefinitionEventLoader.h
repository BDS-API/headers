#pragma once

#include "../../json/Value.h"


class DefinitionEventLoader {

public:

    void loadEvent(Json::Value);
    void loadCollection(Json::Value);
};
