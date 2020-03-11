#pragma once

#include "./OriginMapping.h"


namespace FunctionManager {

class OriginMapping {

public:

    ~OriginMapping();
    OriginMapping(FunctionManager::OriginMapping &&);
};

}