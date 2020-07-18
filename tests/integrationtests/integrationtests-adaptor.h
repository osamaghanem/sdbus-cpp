
/*
 * This file was automatically generated by sdbus-c++-xml2cpp; DO NOT EDIT!
 */

#ifndef __sdbuscpp__integrationtests_adaptor_h__adaptor__H__
#define __sdbuscpp__integrationtests_adaptor_h__adaptor__H__

#include <sdbus-c++/sdbus-c++.h>
#include <string>
#include <tuple>

namespace org {
namespace sdbuscpp {

class integrationtests_adaptor
{
public:
    static constexpr const char* INTERFACE_NAME = "org.sdbuscpp.integrationtests";

protected:
    integrationtests_adaptor(sdbus::IObject& object)
        : object_(object)
    {
        object_.setInterfaceFlags(INTERFACE_NAME).markAsDeprecated().withPropertyUpdateBehavior(sdbus::Flags::EMITS_NO_SIGNAL);
        object_.registerMethod("noArgNoReturn").onInterface(INTERFACE_NAME).implementedAs([this](){ return this->noArgNoReturn(); });
        object_.registerMethod("getInt").onInterface(INTERFACE_NAME).withOutputParamNames("anInt").implementedAs([this](){ return this->getInt(); });
        object_.registerMethod("getTuple").onInterface(INTERFACE_NAME).withOutputParamNames("arg0", "arg1").implementedAs([this](){ return this->getTuple(); });
        object_.registerMethod("multiply").onInterface(INTERFACE_NAME).withInputParamNames("a", "b").withOutputParamNames("result").implementedAs([this](const int64_t& a, const double& b){ return this->multiply(a, b); });
        object_.registerMethod("multiplyWithNoReply").onInterface(INTERFACE_NAME).withInputParamNames("a", "b").implementedAs([this](const int64_t& a, const double& b){ return this->multiplyWithNoReply(a, b); }).markAsDeprecated().withNoReply();
        object_.registerMethod("getInts16FromStruct").onInterface(INTERFACE_NAME).withInputParamNames("arg0").withOutputParamNames("arg0").implementedAs([this](const sdbus::Struct<uint8_t, int16_t, double, std::string, std::vector<int16_t>>& arg0){ return this->getInts16FromStruct(arg0); });
        object_.registerMethod("processVariant").onInterface(INTERFACE_NAME).withInputParamNames("variant").withOutputParamNames("result").implementedAs([this](const sdbus::Variant& variant){ return this->processVariant(variant); });
        object_.registerMethod("getMapOfVariants").onInterface(INTERFACE_NAME).withInputParamNames("x", "y").withOutputParamNames("aMapOfVariants").implementedAs([this](const std::vector<int32_t>& x, const sdbus::Struct<sdbus::Variant, sdbus::Variant>& y){ return this->getMapOfVariants(x, y); });
        object_.registerMethod("getStructInStruct").onInterface(INTERFACE_NAME).withOutputParamNames("aMapOfVariants").implementedAs([this](){ return this->getStructInStruct(); });
        object_.registerMethod("sumStructItems").onInterface(INTERFACE_NAME).withInputParamNames("arg0", "arg1").withOutputParamNames("arg0").implementedAs([this](const sdbus::Struct<uint8_t, uint16_t>& arg0, const sdbus::Struct<int32_t, int64_t>& arg1){ return this->sumStructItems(arg0, arg1); });
        object_.registerMethod("sumVectorItems").onInterface(INTERFACE_NAME).withInputParamNames("arg0", "arg1").withOutputParamNames("arg0").implementedAs([this](const std::vector<uint16_t>& arg0, const std::vector<uint64_t>& arg1){ return this->sumVectorItems(arg0, arg1); });
        object_.registerMethod("doOperation").onInterface(INTERFACE_NAME).withInputParamNames("arg0").withOutputParamNames("arg0").implementedAs([this](const uint32_t& arg0){ return this->doOperation(arg0); });
        object_.registerMethod("doOperationAsync").onInterface(INTERFACE_NAME).withInputParamNames("arg0").withOutputParamNames("arg0").implementedAs([this](sdbus::Result<uint32_t>&& result, uint32_t arg0){ this->doOperationAsync(std::move(result), std::move(arg0)); });
        object_.registerMethod("getSignature").onInterface(INTERFACE_NAME).withOutputParamNames("arg0").implementedAs([this](){ return this->getSignature(); });
        object_.registerMethod("getObjectPath").onInterface(INTERFACE_NAME).withOutputParamNames("arg0").implementedAs([this](){ return this->getObjectPath(); });
        object_.registerMethod("getUnixFd").onInterface(INTERFACE_NAME).withOutputParamNames("arg0").implementedAs([this](){ return this->getUnixFd(); });
        object_.registerMethod("getComplex").onInterface(INTERFACE_NAME).withOutputParamNames("arg0").implementedAs([this](){ return this->getComplex(); }).markAsDeprecated();
        object_.registerMethod("throwError").onInterface(INTERFACE_NAME).implementedAs([this](){ return this->throwError(); });
        object_.registerMethod("throwErrorWithNoReply").onInterface(INTERFACE_NAME).implementedAs([this](){ return this->throwErrorWithNoReply(); }).withNoReply();
        object_.registerMethod("doPrivilegedStuff").onInterface(INTERFACE_NAME).implementedAs([this](){ return this->doPrivilegedStuff(); }).markAsPrivileged();
        object_.registerMethod("emitTwoSimpleSignals").onInterface(INTERFACE_NAME).implementedAs([this](){ return this->emitTwoSimpleSignals(); });
        object_.registerSignal("simpleSignal").onInterface(INTERFACE_NAME).markAsDeprecated();
        object_.registerSignal("signalWithMap").onInterface(INTERFACE_NAME).withParameters<std::map<int32_t, std::string>>("aMap");
        object_.registerSignal("signalWithVariant").onInterface(INTERFACE_NAME).withParameters<sdbus::Variant>("aVariant");
        object_.registerProperty("action").onInterface(INTERFACE_NAME).withGetter([this](){ return this->action(); }).withSetter([this](const uint32_t& value){ this->action(value); }).withUpdateBehavior(sdbus::Flags::EMITS_INVALIDATION_SIGNAL);
        object_.registerProperty("blocking").onInterface(INTERFACE_NAME).withGetter([this](){ return this->blocking(); }).withSetter([this](const bool& value){ this->blocking(value); });
        object_.registerProperty("state").onInterface(INTERFACE_NAME).withGetter([this](){ return this->state(); }).markAsDeprecated().withUpdateBehavior(sdbus::Flags::CONST_PROPERTY_VALUE);
    }

    ~integrationtests_adaptor() = default;

public:
    void emitSimpleSignal()
    {
        object_.emitSignal("simpleSignal").onInterface(INTERFACE_NAME);
    }

    void emitSignalWithMap(const std::map<int32_t, std::string>& aMap)
    {
        object_.emitSignal("signalWithMap").onInterface(INTERFACE_NAME).withArguments(aMap);
    }

    void emitSignalWithVariant(const sdbus::Variant& aVariant)
    {
        object_.emitSignal("signalWithVariant").onInterface(INTERFACE_NAME).withArguments(aVariant);
    }

private:
    virtual void noArgNoReturn() = 0;
    virtual int32_t getInt() = 0;
    virtual std::tuple<uint32_t, std::string> getTuple() = 0;
    virtual double multiply(const int64_t& a, const double& b) = 0;
    virtual void multiplyWithNoReply(const int64_t& a, const double& b) = 0;
    virtual std::vector<int16_t> getInts16FromStruct(const sdbus::Struct<uint8_t, int16_t, double, std::string, std::vector<int16_t>>& arg0) = 0;
    virtual sdbus::Variant processVariant(const sdbus::Variant& variant) = 0;
    virtual std::map<int32_t, sdbus::Variant> getMapOfVariants(const std::vector<int32_t>& x, const sdbus::Struct<sdbus::Variant, sdbus::Variant>& y) = 0;
    virtual sdbus::Struct<std::string, sdbus::Struct<std::map<int32_t, int32_t>>> getStructInStruct() = 0;
    virtual int32_t sumStructItems(const sdbus::Struct<uint8_t, uint16_t>& arg0, const sdbus::Struct<int32_t, int64_t>& arg1) = 0;
    virtual uint32_t sumVectorItems(const std::vector<uint16_t>& arg0, const std::vector<uint64_t>& arg1) = 0;
    virtual uint32_t doOperation(const uint32_t& arg0) = 0;
    virtual void doOperationAsync(sdbus::Result<uint32_t>&& result, uint32_t arg0) = 0;
    virtual sdbus::Signature getSignature() = 0;
    virtual sdbus::ObjectPath getObjectPath() = 0;
    virtual sdbus::UnixFd getUnixFd() = 0;
    virtual std::map<uint64_t, sdbus::Struct<std::map<uint8_t, std::vector<sdbus::Struct<sdbus::ObjectPath, bool, sdbus::Variant, std::map<int32_t, std::string>>>>, sdbus::Signature, std::string>> getComplex() = 0;
    virtual void throwError() = 0;
    virtual void throwErrorWithNoReply() = 0;
    virtual void doPrivilegedStuff() = 0;
    virtual void emitTwoSimpleSignals() = 0;

private:
    virtual uint32_t action() = 0;
    virtual void action(const uint32_t& value) = 0;
    virtual bool blocking() = 0;
    virtual void blocking(const bool& value) = 0;
    virtual std::string state() = 0;

private:
    sdbus::IObject& object_;
};

}} // namespaces

#endif