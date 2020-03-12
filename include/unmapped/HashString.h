#pragma once

#include <string>


namespace Util {

    class HashString {

    public:
        class HashFunc;

        void operator<(Util::HashString const&)const;
        std::string getString()const;
        void operator==(Util::HashString const&)const;
        HashString(std::string const&);
        HashString(Util::HashString const&);
        ~HashString();
        void operator!=(Util::HashString const&)const;
        HashString();
        class HashFunc {

        public:
            void operator()(Util::HashString const&, Util::HashString const&)const;
            void operator()(Util::HashString const&)const;
        };
    };
}
