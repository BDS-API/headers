#pragma once

#include "../bedrock/actor/Actor.h"


class AddRiderComponent {

public:
    AddRiderComponent(AddRiderComponent &&);
    AddRiderComponent();
    ~AddRiderComponent();
    void reloadComponent(Actor &);
};
