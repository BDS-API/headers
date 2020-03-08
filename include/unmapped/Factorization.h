#pragma once

#include "../bedrock/command/Symbol"


using namespace CommandRegistry;

class Factorization {

public:

    Factorization(CommandRegistry::Symbol);
    Factorization(CommandRegistry::Factorization&&);
};
