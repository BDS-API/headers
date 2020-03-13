#pragma once



namespace Core {

    class ExcludedPath {

    public:
        ~ExcludedPath(); // _ZN4Core12ExcludedPathD2Ev
        ExcludedPath(Core::ExcludedPath const&); // _ZN4Core12ExcludedPathC2ERKS0_
        ExcludedPath(Core::ExcludedPath &&); // _ZN4Core12ExcludedPathC2EOS0_
//      ExcludedPath(Core::PathBuffer<std::string>, bool); //TODO: incomplete function definition // _ZN4Core12ExcludedPathC2ENS_10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEb
    };
}
