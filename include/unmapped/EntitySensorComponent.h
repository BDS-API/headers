#pragma once

#include "./EntitySensorComponent.h"


class EntitySensorComponent {

public:
    static long NO_MAX_COUNT;


    ~EntitySensorComponent();
    EntitySensorComponent(EntitySensorComponent &&);
    EntitySensorComponent();
};
