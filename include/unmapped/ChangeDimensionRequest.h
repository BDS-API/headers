#pragma once

class ChangeDimensionRequest {

public:

    ChangeDimensionRequest(AutomaticID<Dimension, int>, AutomaticID<Dimension, int>, Vec3 const&, bool, bool);
};
