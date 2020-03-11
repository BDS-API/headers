#pragma once

#include "../bedrock/actor/Actor.h"
#include "./PreferredPathComponent.h"


class PreferredPathComponent {

public:

    PreferredPathComponent(PreferredPathComponent &&);
    void initFromDefinition(Actor &);
    void getPreferredPath(Actor &);
};
