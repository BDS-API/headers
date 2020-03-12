#pragma once

#include "../bedrock/actor/Actor.h"


class PreferredPathComponent {

public:
    void initFromDefinition(Actor &);
    PreferredPathComponent(PreferredPathComponent &&);
    void getPreferredPath(Actor &);
};
