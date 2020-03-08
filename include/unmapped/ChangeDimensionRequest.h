#pragma once

#include "../bedrock/util/Vec3"


class ChangeDimensionRequest {

public:

    ChangeDimensionRequest(AutomaticID<Dimension, int>, AutomaticID<Dimension, int>, Vec3 const&, bool, bool);
};
