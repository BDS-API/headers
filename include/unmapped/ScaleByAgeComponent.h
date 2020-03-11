#pragma once

#include "./ScaleByAgeComponent.h"
#include "./EntityContext.h"


class ScaleByAgeComponent {

public:

    ScaleByAgeComponent(ScaleByAgeComponent &&);
    void _initializeScale(EntityContext &);
};
