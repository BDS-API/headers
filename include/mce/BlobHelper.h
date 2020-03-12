#pragma once

#include <string>


namespace mce {

    namespace BlobHelper {

//      void copySpanIntoBlob(mce::Blob &, gsl::span<unsigned char const, -1l>); //TODO: incomplete function definition
        void copyStringIntoBlob(mce::Blob &, std::string const&);
        void resize(mce::Blob &, unsigned long);
        void equals(mce::Blob const&, mce::Blob const&);
        void clone(mce::Blob const&);
    };
}
