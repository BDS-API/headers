#pragma once

using namespace CommandRegistry;

class Factorization {

public:

    Factorization(CommandRegistry::Symbol);
    Factorization(CommandRegistry::Factorization&&);
};
