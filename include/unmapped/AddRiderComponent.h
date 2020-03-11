#pragma once

#include "./AddRiderComponent.h"
#include "../bedrock/actor/Actor.h"


class AddRiderComponent {

public:

    void reloadComponent(Actor &);
    ~AddRiderComponent();
    AddRiderComponent(AddRiderComponent &&);
    AddRiderComponent();
};
