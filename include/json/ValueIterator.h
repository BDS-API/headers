#pragma once



using namespace Json;

class ValueIterator {

public:

    ValueIterator(void);
    ValueIterator(std::_Rb_tree_iterator<std::pair<Json::Value::CZString const, Json::Value>> const&);
    ValueIterator(Json::ValueConstIterator const&);
    ValueIterator(Json::ValueIterator const&);
};
