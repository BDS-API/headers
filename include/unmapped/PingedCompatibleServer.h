#pragma once

#include "./PingedCompatibleServer.h"


class PingedCompatibleServer {

public:

    PingedCompatibleServer();
    ~PingedCompatibleServer();
    PingedCompatibleServer(PingedCompatibleServer const&);
    PingedCompatibleServer(PingedCompatibleServer &&);
};
