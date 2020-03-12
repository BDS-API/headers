#pragma once

#include <string>


namespace Util {

    class HashString {

    public:
        class HashFunc;

        void operator==(Util::HashString const&)const;
        HashString(Util::HashString const&);
        void operator<(Util::HashString const&)const;
        HashString();
        HashString(std::string const&);
        std::string getString()const;
        ~HashString();
        void operator!=(Util::HashString const&)const;
        class HashFunc {

        public:
            void operator()(Util::HashString const&, Util::HashString const&)const;
            void operator()(Util::HashString const&)const;
        };
    };
}
