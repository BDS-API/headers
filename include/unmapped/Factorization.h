#pragma once

#include "./Factorization.h"
#include "./Symbol.h"


namespace CommandRegistry {

class Factorization {

public:

    Factorization(CommandRegistry::Symbol);
    Factorization(CommandRegistry::Factorization &&);
};

}