#pragma once



namespace Json {

    class ValueIterator {

    public:
        void operator*()const; // _ZNK4Json13ValueIteratordeEv
        ValueIterator(); // _ZN4Json13ValueIteratorC2Ev
//      ValueIterator(std::_Rb_tree_iterator<std::pair<Json::Value::CZString const, Json::Value>> const&); //TODO: incomplete function definition // _ZN4Json13ValueIteratorC2ERKSt17_Rb_tree_iteratorISt4pairIKNS_5Value8CZStringES3_EE
        ValueIterator(Json::ValueConstIterator const&); // _ZN4Json13ValueIteratorC2ERKNS_18ValueConstIteratorE
        ValueIterator(Json::ValueIterator const&); // _ZN4Json13ValueIteratorC2ERKS0_
    };
}
