#pragma once



namespace Core {

    namespace Profile {

        class CPUProfileToken {

        public:
            CPUProfileToken(unsigned long, char const*, char const*, unsigned int);
            bool isValid()const;
            CPUProfileToken();
        };
    }
}
