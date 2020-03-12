#pragma once



class PingedCompatibleServer {

public:
    ~PingedCompatibleServer();
    PingedCompatibleServer(PingedCompatibleServer const&);
    PingedCompatibleServer();
    PingedCompatibleServer(PingedCompatibleServer &&);
};
