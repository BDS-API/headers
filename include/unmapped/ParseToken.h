#pragma once

#include "./Symbol.h"
#include "./ParseToken.h"
#include <string>


namespace CommandRegistry {

class ParseToken {

public:

    ~ParseToken();
    ParseToken(CommandRegistry::Symbol, CommandRegistry::ParseToken *);
    std::string toString()const;
};

}