#pragma once



using namespace com::mojang::clacks::protocol::Commands;

class StubInterface {

public:
    com::mojang::clacks::protocol::Commands::StubInterface::~StubInterface()
    virtual void experimental_async();

    StubInterface(void);
};
