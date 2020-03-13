#pragma once

#include <string>


namespace Json {

    class Value {

    public:
        class CZString;

//      Value(Json::ValueType); //TODO: incomplete function definition // _ZN4Json5ValueC2ENS_9ValueTypeE
        Value(unsigned int); // _ZN4Json5ValueC2Ej
        Value(int); // _ZN4Json5ValueC2Ei
        Value(long); // _ZN4Json5ValueC2Ex
        Value(unsigned long); // _ZN4Json5ValueC2Ey
        Value(double); // _ZN4Json5ValueC2Ed
        Value(char const*); // _ZN4Json5ValueC2EPKc
        Value(char const*, char const*); // _ZN4Json5ValueC2EPKcS2_
        Value(std::string const&); // _ZN4Json5ValueC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        Value(Json::StaticString const&); // _ZN4Json5ValueC2ERKNS_12StaticStringE
        Value(bool); // _ZN4Json5ValueC2Eb
        Value(Json::Value const&); // _ZN4Json5ValueC2ERKS0_
        ~Value(); // _ZN4Json5ValueD2Ev
        void swap(Json::Value &); // _ZN4Json5Value4swapERS0_
        void type()const; // _ZNK4Json5Value4typeEv
        void compare(Json::Value const&)const; // _ZNK4Json5Value7compareERKS0_
        void operator<(Json::Value const&)const; // _ZNK4Json5ValueltERKS0_
        void operator>(Json::Value const&)const; // _ZNK4Json5ValuegtERKS0_
        void operator<=(Json::Value const&)const; // _ZNK4Json5ValueleERKS0_
        void operator>=(Json::Value const&)const; // _ZNK4Json5ValuegeERKS0_
        void operator==(Json::Value const&)const; // _ZNK4Json5ValueeqERKS0_
        void operator!=(Json::Value const&)const; // _ZNK4Json5ValueneERKS0_
        bool asCString()const; // _ZNK4Json5Value9asCStringEv
        bool asString(std::string const&)const; // _ZNK4Json5Value8asStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        bool asInt(int)const; // _ZNK4Json5Value5asIntEi
        bool asUInt(unsigned int)const; // _ZNK4Json5Value6asUIntEj
        bool asInt64(long)const; // _ZNK4Json5Value7asInt64Ex
        bool asUInt64(unsigned long)const; // _ZNK4Json5Value8asUInt64Ey
        bool asLargestInt()const; // _ZNK4Json5Value12asLargestIntEv
        bool asLargestUInt()const; // _ZNK4Json5Value13asLargestUIntEv
        bool asDouble(double)const; // _ZNK4Json5Value8asDoubleEd
        bool asFloat(float)const; // _ZNK4Json5Value7asFloatEf
        bool asBool(bool)const; // _ZNK4Json5Value6asBoolEb
//      bool isConvertibleTo(Json::ValueType)const; //TODO: incomplete function definition // _ZNK4Json5Value15isConvertibleToENS_9ValueTypeE
        void size()const; // _ZNK4Json5Value4sizeEv
        void empty()const; // _ZNK4Json5Value5emptyEv
        bool isNull()const; // _ZNK4Json5Value6isNullEv
        bool isArray()const; // _ZNK4Json5Value7isArrayEv
        bool isObject()const; // _ZNK4Json5Value8isObjectEv
        void clear(); // _ZN4Json5Value5clearEv
        void resize(unsigned int); // _ZN4Json5Value6resizeEj
        void operator[](unsigned int); // _ZN4Json5ValueixEj
        void operator[](int); // _ZN4Json5ValueixEi
        void operator[](unsigned int)const; // _ZNK4Json5ValueixEj
        void operator[](int)const; // _ZNK4Json5ValueixEi
        void operator[](char const*); // _ZN4Json5ValueixEPKc
        void resolveReference(char const*, bool); // _ZN4Json5Value16resolveReferenceEPKcb
        void get(unsigned int, Json::Value const&)const; // _ZNK4Json5Value3getEjRKS0_
        bool isValidIndex(unsigned int)const; // _ZNK4Json5Value12isValidIndexEj
        void operator[](char const*)const; // _ZNK4Json5ValueixEPKc
        void operator[](std::string const&); // _ZN4Json5ValueixERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        void operator[](std::string const&)const; // _ZNK4Json5ValueixERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        void operator[](Json::StaticString const&); // _ZN4Json5ValueixERKNS_12StaticStringE
        void append(Json::Value const&); // _ZN4Json5Value6appendERKS0_
        void get(char const*, Json::Value const&)const; // _ZNK4Json5Value3getEPKcRKS0_
        void get(std::string const&, Json::Value const&)const; // _ZNK4Json5Value3getERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKS0_
        void removeMember(char const*); // _ZN4Json5Value12removeMemberEPKc
        void removeMember(std::string const&); // _ZN4Json5Value12removeMemberERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        bool isMember(char const*)const; // _ZNK4Json5Value8isMemberEPKc
        bool isMember(std::string const&)const; // _ZNK4Json5Value8isMemberERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        std::string getMemberNames()const; // _ZNK4Json5Value14getMemberNamesB5cxx11Ev
        bool isBool()const; // _ZNK4Json5Value6isBoolEv
        bool isInt()const; // _ZNK4Json5Value5isIntEv
        bool isUInt()const; // _ZNK4Json5Value6isUIntEv
        bool isIntegral()const; // _ZNK4Json5Value10isIntegralEv
        bool isDouble()const; // _ZNK4Json5Value8isDoubleEv
        bool isNumeric()const; // _ZNK4Json5Value9isNumericEv
        bool isString()const; // _ZNK4Json5Value8isStringEv
//      void setComment(char const*, Json::CommentPlacement); //TODO: incomplete function definition // _ZN4Json5Value10setCommentEPKcNS_16CommentPlacementE
//      void setComment(std::string const&, Json::CommentPlacement); //TODO: incomplete function definition // _ZN4Json5Value10setCommentERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_16CommentPlacementE
//      bool hasComment(Json::CommentPlacement)const; //TODO: incomplete function definition // _ZNK4Json5Value10hasCommentENS_16CommentPlacementE
//      std::string getComment(Json::CommentPlacement)const; //TODO: incomplete function definition // _ZNK4Json5Value10getCommentB5cxx11ENS_16CommentPlacementE
        std::string toStyledString()const; // _ZNK4Json5Value14toStyledStringB5cxx11Ev
        void begin()const; // _ZNK4Json5Value5beginEv
        void end()const; // _ZNK4Json5Value3endEv
        void begin(); // _ZN4Json5Value5beginEv
        void end(); // _ZN4Json5Value3endEv
        class CZString {

        public:
            void c_str()const; // _ZNK4Json5Value8CZString5c_strEv
            bool isStaticString()const; // _ZNK4Json5Value8CZString14isStaticStringEv
            void index()const; // _ZNK4Json5Value8CZString5indexEv
            CZString(unsigned int); // _ZN4Json5Value8CZStringC2Ej
//          CZString(char const*, Json::Value::CZString::DuplicationPolicy); //TODO: incomplete function definition // _ZN4Json5Value8CZStringC2EPKcNS1_17DuplicationPolicyE
            CZString(Json::Value::CZString const&); // _ZN4Json5Value8CZStringC2ERKS1_
            ~CZString(); // _ZN4Json5Value8CZStringD2Ev
            void swap(Json::Value::CZString &); // _ZN4Json5Value8CZString4swapERS1_
            void operator<(Json::Value::CZString const&)const; // _ZNK4Json5Value8CZStringltERKS1_
            void operator==(Json::Value::CZString const&)const; // _ZNK4Json5Value8CZStringeqERKS1_
        };
    };
}
