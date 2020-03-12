#pragma once



namespace Crypto {

    namespace Hash {

        class Hash {

        public:
            ~Hash();
//          Hash(Crypto::Hash::HashType); //TODO: incomplete function definition
            std::string final();
            void getUUID();
            void update(void const*, unsigned int);
        };
    }
}
