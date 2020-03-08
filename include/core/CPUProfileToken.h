#pragma once



using namespace Core::Profile;

class CPUProfileToken {

public:

    CPUProfileToken(void);
    CPUProfileToken(unsigned long, char const*, char const*, unsigned int);
    bool isValid()const;
};
