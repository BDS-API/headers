#pragma once

class mce::BlobHelper {

public:

    void equals(mce::Blob const&, mce::Blob const&);
    void resize(mce::Blob &, unsigned long);
    void copySpanIntoBlob(mce::Blob &, gsl::span<unsigned char const, -1l>);
    void copyStringIntoBlob(mce::Blob &, std::string const&);
    void clone(mce::Blob const&);
};
