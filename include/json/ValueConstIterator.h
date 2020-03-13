#pragma once



namespace Json {

    class ValueConstIterator {

    public:
        void operator*()const; // _ZNK4Json18ValueConstIteratordeEv
        ValueConstIterator(Json::ValueConstIterator const&); // _ZN4Json18ValueConstIteratorC2ERKS0_
        ValueConstIterator(); // _ZN4Json18ValueConstIteratorC2Ev
//      ValueConstIterator(std::_Rb_tree_iterator<std::pair<Json::Value::CZString const, Json::Value>> const&); //TODO: incomplete function definition // _ZN4Json18ValueConstIteratorC2ERKSt17_Rb_tree_iteratorISt4pairIKNS_5Value8CZStringES3_EE
    };
}
