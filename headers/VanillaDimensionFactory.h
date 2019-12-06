#pragma once

class VanillaDimensionFactory {

public:

    void registerDimensionTypes(Factory<Dimension, Level &, Scheduler &> &);
};
