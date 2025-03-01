/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSTestStringifierAnonymousOperation.h"

#include "ActiveDOMObject.h"
#include "ExtendedDOMClientIsoSubspaces.h"
#include "ExtendedDOMIsoSubspaces.h"
#include "JSDOMBinding.h"
#include "JSDOMConstructorNotConstructable.h"
#include "JSDOMConvertStrings.h"
#include "JSDOMExceptionHandling.h"
#include "JSDOMGlobalObjectInlines.h"
#include "JSDOMOperation.h"
#include "JSDOMWrapperCache.h"
#include "ScriptExecutionContext.h"
#include "WebCoreJSClientData.h"
#include <JavaScriptCore/FunctionPrototype.h>
#include <JavaScriptCore/HeapAnalyzer.h>
#include <JavaScriptCore/JSCInlines.h>
#include <JavaScriptCore/JSDestructibleObjectHeapCellType.h>
#include <JavaScriptCore/SlotVisitorMacros.h>
#include <JavaScriptCore/SubspaceInlines.h>
#include <wtf/GetPtr.h>
#include <wtf/PointerPreparations.h>
#include <wtf/URL.h>


namespace WebCore {
using namespace JSC;

// Functions

static JSC_DECLARE_HOST_FUNCTION(jsTestStringifierAnonymousOperationPrototypeFunction_toString);

// Attributes

static JSC_DECLARE_CUSTOM_GETTER(jsTestStringifierAnonymousOperationConstructor);

class JSTestStringifierAnonymousOperationPrototype final : public JSC::JSNonFinalObject {
public:
    using Base = JSC::JSNonFinalObject;
    static JSTestStringifierAnonymousOperationPrototype* create(JSC::VM& vm, JSDOMGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSTestStringifierAnonymousOperationPrototype* ptr = new (NotNull, JSC::allocateCell<JSTestStringifierAnonymousOperationPrototype>(vm)) JSTestStringifierAnonymousOperationPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    template<typename CellType, JSC::SubspaceAccess>
    static JSC::GCClient::IsoSubspace* subspaceFor(JSC::VM& vm)
    {
        STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSTestStringifierAnonymousOperationPrototype, Base);
        return &vm.plainObjectSpace();
    }
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSTestStringifierAnonymousOperationPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};
STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSTestStringifierAnonymousOperationPrototype, JSTestStringifierAnonymousOperationPrototype::Base);

using JSTestStringifierAnonymousOperationDOMConstructor = JSDOMConstructorNotConstructable<JSTestStringifierAnonymousOperation>;

template<> const ClassInfo JSTestStringifierAnonymousOperationDOMConstructor::s_info = { "TestStringifierAnonymousOperation"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestStringifierAnonymousOperationDOMConstructor) };

template<> JSValue JSTestStringifierAnonymousOperationDOMConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    UNUSED_PARAM(vm);
    return globalObject.functionPrototype();
}

template<> void JSTestStringifierAnonymousOperationDOMConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->length, jsNumber(0), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    JSString* nameString = jsNontrivialString(vm, "TestStringifierAnonymousOperation"_s);
    m_originalName.set(vm, this, nameString);
    putDirect(vm, vm.propertyNames->name, nameString, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->prototype, JSTestStringifierAnonymousOperation::prototype(vm, globalObject), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum | JSC::PropertyAttribute::DontDelete);
}

/* Hash table for prototype */

static const HashTableValue JSTestStringifierAnonymousOperationPrototypeTableValues[] =
{
    { "constructor"_s, static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsTestStringifierAnonymousOperationConstructor, 0 } },
    { "toString"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, jsTestStringifierAnonymousOperationPrototypeFunction_toString, 0 } },
};

const ClassInfo JSTestStringifierAnonymousOperationPrototype::s_info = { "TestStringifierAnonymousOperation"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestStringifierAnonymousOperationPrototype) };

void JSTestStringifierAnonymousOperationPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSTestStringifierAnonymousOperation::info(), JSTestStringifierAnonymousOperationPrototypeTableValues, *this);
    JSC_TO_STRING_TAG_WITHOUT_TRANSITION();
}

const ClassInfo JSTestStringifierAnonymousOperation::s_info = { "TestStringifierAnonymousOperation"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestStringifierAnonymousOperation) };

JSTestStringifierAnonymousOperation::JSTestStringifierAnonymousOperation(Structure* structure, JSDOMGlobalObject& globalObject, Ref<TestStringifierAnonymousOperation>&& impl)
    : JSDOMWrapper<TestStringifierAnonymousOperation>(structure, globalObject, WTFMove(impl))
{
}

void JSTestStringifierAnonymousOperation::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));

    static_assert(!std::is_base_of<ActiveDOMObject, TestStringifierAnonymousOperation>::value, "Interface is not marked as [ActiveDOMObject] even though implementation class subclasses ActiveDOMObject.");

}

JSObject* JSTestStringifierAnonymousOperation::createPrototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return JSTestStringifierAnonymousOperationPrototype::create(vm, &globalObject, JSTestStringifierAnonymousOperationPrototype::createStructure(vm, &globalObject, globalObject.objectPrototype()));
}

JSObject* JSTestStringifierAnonymousOperation::prototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return getDOMPrototype<JSTestStringifierAnonymousOperation>(vm, globalObject);
}

JSValue JSTestStringifierAnonymousOperation::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTestStringifierAnonymousOperationDOMConstructor, DOMConstructorID::TestStringifierAnonymousOperation>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

void JSTestStringifierAnonymousOperation::destroy(JSC::JSCell* cell)
{
    JSTestStringifierAnonymousOperation* thisObject = static_cast<JSTestStringifierAnonymousOperation*>(cell);
    thisObject->JSTestStringifierAnonymousOperation::~JSTestStringifierAnonymousOperation();
}

JSC_DEFINE_CUSTOM_GETTER(jsTestStringifierAnonymousOperationConstructor, (JSGlobalObject* lexicalGlobalObject, EncodedJSValue thisValue, PropertyName))
{
    VM& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSTestStringifierAnonymousOperationPrototype*>(JSValue::decode(thisValue));
    if (UNLIKELY(!prototype))
        return throwVMTypeError(lexicalGlobalObject, throwScope);
    return JSValue::encode(JSTestStringifierAnonymousOperation::getConstructor(JSC::getVM(lexicalGlobalObject), prototype->globalObject()));
}

static inline JSC::EncodedJSValue jsTestStringifierAnonymousOperationPrototypeFunction_toStringBody(JSC::JSGlobalObject* lexicalGlobalObject, JSC::CallFrame* callFrame, typename IDLOperation<JSTestStringifierAnonymousOperation>::ClassParameter castedThis)
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    UNUSED_PARAM(throwScope);
    UNUSED_PARAM(callFrame);
    auto& impl = castedThis->wrapped();
    RELEASE_AND_RETURN(throwScope, JSValue::encode(toJS<IDLDOMString>(*lexicalGlobalObject, throwScope, impl.toString())));
}

JSC_DEFINE_HOST_FUNCTION(jsTestStringifierAnonymousOperationPrototypeFunction_toString, (JSGlobalObject* lexicalGlobalObject, CallFrame* callFrame))
{
    return IDLOperation<JSTestStringifierAnonymousOperation>::call<jsTestStringifierAnonymousOperationPrototypeFunction_toStringBody>(*lexicalGlobalObject, *callFrame, "toString");
}

JSC::GCClient::IsoSubspace* JSTestStringifierAnonymousOperation::subspaceForImpl(JSC::VM& vm)
{
    return WebCore::subspaceForImpl<JSTestStringifierAnonymousOperation, UseCustomHeapCellType::No>(vm,
        [] (auto& spaces) { return spaces.m_clientSubspaceForTestStringifierAnonymousOperation.get(); },
        [] (auto& spaces, auto&& space) { spaces.m_clientSubspaceForTestStringifierAnonymousOperation = std::forward<decltype(space)>(space); },
        [] (auto& spaces) { return spaces.m_subspaceForTestStringifierAnonymousOperation.get(); },
        [] (auto& spaces, auto&& space) { spaces.m_subspaceForTestStringifierAnonymousOperation = std::forward<decltype(space)>(space); }
    );
}

void JSTestStringifierAnonymousOperation::analyzeHeap(JSCell* cell, HeapAnalyzer& analyzer)
{
    auto* thisObject = jsCast<JSTestStringifierAnonymousOperation*>(cell);
    analyzer.setWrappedObjectForCell(cell, &thisObject->wrapped());
    if (thisObject->scriptExecutionContext())
        analyzer.setLabelForCell(cell, "url " + thisObject->scriptExecutionContext()->url().string());
    Base::analyzeHeap(cell, analyzer);
}

bool JSTestStringifierAnonymousOperationOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, AbstractSlotVisitor& visitor, const char** reason)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    UNUSED_PARAM(reason);
    return false;
}

void JSTestStringifierAnonymousOperationOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsTestStringifierAnonymousOperation = static_cast<JSTestStringifierAnonymousOperation*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsTestStringifierAnonymousOperation->wrapped(), jsTestStringifierAnonymousOperation);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7TestStringifierAnonymousOperation@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore33TestStringifierAnonymousOperationE[]; }
#endif
#endif

JSC::JSValue toJSNewlyCreated(JSC::JSGlobalObject*, JSDOMGlobalObject* globalObject, Ref<TestStringifierAnonymousOperation>&& impl)
{

    if constexpr (std::is_polymorphic_v<TestStringifierAnonymousOperation>) {
#if ENABLE(BINDING_INTEGRITY)
        const void* actualVTablePointer = getVTablePointer(impl.ptr());
#if PLATFORM(WIN)
        void* expectedVTablePointer = __identifier("??_7TestStringifierAnonymousOperation@WebCore@@6B@");
#else
        void* expectedVTablePointer = &_ZTVN7WebCore33TestStringifierAnonymousOperationE[2];
#endif

        // If you hit this assertion you either have a use after free bug, or
        // TestStringifierAnonymousOperation has subclasses. If TestStringifierAnonymousOperation has subclasses that get passed
        // to toJS() we currently require TestStringifierAnonymousOperation you to opt out of binding hardening
        // by adding the SkipVTableValidation attribute to the interface IDL definition
        RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    }
    return createWrapper<TestStringifierAnonymousOperation>(globalObject, WTFMove(impl));
}

JSC::JSValue toJS(JSC::JSGlobalObject* lexicalGlobalObject, JSDOMGlobalObject* globalObject, TestStringifierAnonymousOperation& impl)
{
    return wrap(lexicalGlobalObject, globalObject, impl);
}

TestStringifierAnonymousOperation* JSTestStringifierAnonymousOperation::toWrapped(JSC::VM&, JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSTestStringifierAnonymousOperation*>(value))
        return &wrapper->wrapped();
    return nullptr;
}

}
