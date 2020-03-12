#pragma once



class PingedCompatibleServer {

public:
    ~PingedCompatibleServer();
    PingedCompatibleServer(PingedCompatibleServer &&);
    PingedCompatibleServer(PingedCompatibleServer const&);
    PingedCompatibleServer();
};
