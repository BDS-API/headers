#pragma once



namespace com::mojang::clacks::protocol::Commands {

class StubInterface {

public:
    virtual ~StubInterface();
    virtual void experimental_async();

    StubInterface();
};

}