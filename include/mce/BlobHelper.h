#pragma once

#include "Blob.h"
#include <string>


namespace mce {

    namespace BlobHelper {

        void resize(mce::Blob &, unsigned long);
        void copyStringIntoBlob(mce::Blob &, std::string const&);
//      void copySpanIntoBlob(mce::Blob &, gsl::span<unsigned char const, -1l>); //TODO: incomplete function definition
        void clone(mce::Blob const&);
        void equals(mce::Blob const&, mce::Blob const&);
    };
}
