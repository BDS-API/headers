#pragma once



using namespace Json;

class ValueConstIterator {

public:

    ValueConstIterator(Json::ValueConstIterator const&);
    ValueConstIterator(void);
    ValueConstIterator(std::_Rb_tree_iterator<std::pair<Json::Value::CZString const, Json::Value>> const&);
};
