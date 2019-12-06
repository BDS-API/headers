#pragma once

class mce::BlobHelper {

public:

    void equals(mce::Blob const&, mce::Blob const&);
    void resize(mce::Blob &, unsigned long);
    void copySpanIntoBlob(mce::Blob &, gsl::span<unsigned char const, -1l>);
    void copyStringIntoBlob(mce::Blob &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void clone(mce::Blob const&);
};
