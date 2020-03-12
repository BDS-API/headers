#pragma once

#include "EntityContext.h"


class ScaleByAgeComponent {

public:
    ScaleByAgeComponent(ScaleByAgeComponent &&);
    void _initializeScale(EntityContext &);
};
