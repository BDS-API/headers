#pragma once

#include <string>


namespace mce {

    namespace BlobHelper {

        void equals(mce::Blob const&, mce::Blob const&); // _ZN3mce10BlobHelper6equalsERKNS_4BlobES3_
        void resize(mce::Blob &, unsigned long); // _ZN3mce10BlobHelper6resizeERNS_4BlobEm
//      void copySpanIntoBlob(mce::Blob &, gsl::span<unsigned char const, -1l>); //TODO: incomplete function definition // _ZN3mce10BlobHelper16copySpanIntoBlobERNS_4BlobEN3gsl4spanIKhLln1EEE
        void copyStringIntoBlob(mce::Blob &, std::string const&); // _ZN3mce10BlobHelper18copyStringIntoBlobERNS_4BlobERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        void clone(mce::Blob const&); // _ZN3mce10BlobHelper5cloneERKNS_4BlobE
    };
}
