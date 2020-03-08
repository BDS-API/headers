#pragma once

#include "../mce/UUID"


class PlayerSuspension {

public:

    PlayerSuspension(mce::UUID const&, PlayerSuspension::State);
};
