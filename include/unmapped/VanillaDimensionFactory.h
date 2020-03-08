#pragma once

#include "../bedrock/Scheduler"
#include "../bedrock/level/Level"


class VanillaDimensionFactory {

public:

    void registerDimensionTypes(Factory<Dimension, Level &, Scheduler &> &);
};
