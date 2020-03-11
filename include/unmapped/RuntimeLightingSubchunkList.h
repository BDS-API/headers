#pragma once

#include "./RuntimeLightingSubchunkList.h"


namespace RuntimeLightingManager {

class RuntimeLightingSubchunkList {

public:

    ~RuntimeLightingSubchunkList();
    RuntimeLightingSubchunkList();
    RuntimeLightingSubchunkList(RuntimeLightingManager::RuntimeLightingSubchunkList &&);
};

}