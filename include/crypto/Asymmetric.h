#pragma once



using namespace Crypto::Asymmetric;

class Asymmetric {

public:

    Asymmetric(Crypto::Asymmetric::System);
    bool canComputeSecret();
    void getSystemType()const;
    Asymmetric(Crypto::Asymmetric::System);
    bool canComputeSecret();
};
