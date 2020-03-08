#pragma once

#include "../bedrock/actor/Actor"


class AddRiderComponent {

public:

    void reloadComponent(Actor &);
    AddRiderComponent(AddRiderComponent&&);
    AddRiderComponent(void);
};
