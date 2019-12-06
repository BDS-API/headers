#pragma once

class ChangeDimensionRequest {

public:

    void ChangeDimensionRequest(AutomaticID<Dimension, int>, AutomaticID<Dimension, int>, Vec3 const&, bool, bool);
};
