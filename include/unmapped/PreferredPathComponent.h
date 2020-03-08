#pragma once

#include "../bedrock/actor/Actor"


class PreferredPathComponent {

public:

    PreferredPathComponent(PreferredPathComponent&&);
    void initFromDefinition(Actor &);
    void getPreferredPath(Actor &);
};
