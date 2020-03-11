#pragma once



namespace Core::Profile {

class CPUProfileToken {

public:

    CPUProfileToken();
    CPUProfileToken(unsigned long, char const*, char const*, unsigned int);
    bool isValid()const;
};

}