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
#include "JSTestNamedDeleterWithIndexedGetter.h"

#include "ActiveDOMObject.h"
#include "ExtendedDOMClientIsoSubspaces.h"
#include "ExtendedDOMIsoSubspaces.h"
#include "JSDOMAbstractOperations.h"
#include "JSDOMBinding.h"
#include "JSDOMConstructorNotConstructable.h"
#include "JSDOMConvertStrings.h"
#include "JSDOMExceptionHandling.h"
#include "JSDOMGlobalObjectInlines.h"
#include "JSDOMWrapperCache.h"
#include "ScriptExecutionContext.h"
#include "WebCoreJSClientData.h"
#include <JavaScriptCore/FunctionPrototype.h>
#include <JavaScriptCore/HeapAnalyzer.h>
#include <JavaScriptCore/JSCInlines.h>
#include <JavaScriptCore/JSDestructibleObjectHeapCellType.h>
#include <JavaScriptCore/PropertyNameArray.h>
#include <JavaScriptCore/SlotVisitorMacros.h>
#include <JavaScriptCore/SubspaceInlines.h>
#include <wtf/GetPtr.h>
#include <wtf/PointerPreparations.h>
#include <wtf/URL.h>


namespace WebCore {
using namespace JSC;

// Attributes

static JSC_DECLARE_CUSTOM_GETTER(jsTestNamedDeleterWithIndexedGetterConstructor);

class JSTestNamedDeleterWithIndexedGetterPrototype final : public JSC::JSNonFinalObject {
public:
    using Base = JSC::JSNonFinalObject;
    static JSTestNamedDeleterWithIndexedGetterPrototype* create(JSC::VM& vm, JSDOMGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSTestNamedDeleterWithIndexedGetterPrototype* ptr = new (NotNull, JSC::allocateCell<JSTestNamedDeleterWithIndexedGetterPrototype>(vm)) JSTestNamedDeleterWithIndexedGetterPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    template<typename CellType, JSC::SubspaceAccess>
    static JSC::GCClient::IsoSubspace* subspaceFor(JSC::VM& vm)
    {
        STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSTestNamedDeleterWithIndexedGetterPrototype, Base);
        return &vm.plainObjectSpace();
    }
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSTestNamedDeleterWithIndexedGetterPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};
STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSTestNamedDeleterWithIndexedGetterPrototype, JSTestNamedDeleterWithIndexedGetterPrototype::Base);

using JSTestNamedDeleterWithIndexedGetterDOMConstructor = JSDOMConstructorNotConstructable<JSTestNamedDeleterWithIndexedGetter>;

template<> const ClassInfo JSTestNamedDeleterWithIndexedGetterDOMConstructor::s_info = { "TestNamedDeleterWithIndexedGetter"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestNamedDeleterWithIndexedGetterDOMConstructor) };

template<> JSValue JSTestNamedDeleterWithIndexedGetterDOMConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    UNUSED_PARAM(vm);
    return globalObject.functionPrototype();
}

template<> void JSTestNamedDeleterWithIndexedGetterDOMConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->length, jsNumber(0), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    JSString* nameString = jsNontrivialString(vm, "TestNamedDeleterWithIndexedGetter"_s);
    m_originalName.set(vm, this, nameString);
    putDirect(vm, vm.propertyNames->name, nameString, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->prototype, JSTestNamedDeleterWithIndexedGetter::prototype(vm, globalObject), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum | JSC::PropertyAttribute::DontDelete);
}

/* Hash table for prototype */

static const HashTableValue JSTestNamedDeleterWithIndexedGetterPrototypeTableValues[] =
{
    { "constructor"_s, static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsTestNamedDeleterWithIndexedGetterConstructor, 0 } },
};

const ClassInfo JSTestNamedDeleterWithIndexedGetterPrototype::s_info = { "TestNamedDeleterWithIndexedGetter"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestNamedDeleterWithIndexedGetterPrototype) };

void JSTestNamedDeleterWithIndexedGetterPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSTestNamedDeleterWithIndexedGetter::info(), JSTestNamedDeleterWithIndexedGetterPrototypeTableValues, *this);
    JSC_TO_STRING_TAG_WITHOUT_TRANSITION();
}

const ClassInfo JSTestNamedDeleterWithIndexedGetter::s_info = { "TestNamedDeleterWithIndexedGetter"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestNamedDeleterWithIndexedGetter) };

JSTestNamedDeleterWithIndexedGetter::JSTestNamedDeleterWithIndexedGetter(Structure* structure, JSDOMGlobalObject& globalObject, Ref<TestNamedDeleterWithIndexedGetter>&& impl)
    : JSDOMWrapper<TestNamedDeleterWithIndexedGetter>(structure, globalObject, WTFMove(impl))
{
}

void JSTestNamedDeleterWithIndexedGetter::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));

    static_assert(!std::is_base_of<ActiveDOMObject, TestNamedDeleterWithIndexedGetter>::value, "Interface is not marked as [ActiveDOMObject] even though implementation class subclasses ActiveDOMObject.");

}

JSObject* JSTestNamedDeleterWithIndexedGetter::createPrototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return JSTestNamedDeleterWithIndexedGetterPrototype::create(vm, &globalObject, JSTestNamedDeleterWithIndexedGetterPrototype::createStructure(vm, &globalObject, globalObject.objectPrototype()));
}

JSObject* JSTestNamedDeleterWithIndexedGetter::prototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return getDOMPrototype<JSTestNamedDeleterWithIndexedGetter>(vm, globalObject);
}

JSValue JSTestNamedDeleterWithIndexedGetter::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTestNamedDeleterWithIndexedGetterDOMConstructor, DOMConstructorID::TestNamedDeleterWithIndexedGetter>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

void JSTestNamedDeleterWithIndexedGetter::destroy(JSC::JSCell* cell)
{
    JSTestNamedDeleterWithIndexedGetter* thisObject = static_cast<JSTestNamedDeleterWithIndexedGetter*>(cell);
    thisObject->JSTestNamedDeleterWithIndexedGetter::~JSTestNamedDeleterWithIndexedGetter();
}

bool JSTestNamedDeleterWithIndexedGetter::getOwnPropertySlot(JSObject* object, JSGlobalObject* lexicalGlobalObject, PropertyName propertyName, PropertySlot& slot)
{
    auto throwScope = DECLARE_THROW_SCOPE(JSC::getVM(lexicalGlobalObject));
    auto* thisObject = jsCast<JSTestNamedDeleterWithIndexedGetter*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    if (auto index = parseIndex(propertyName)) {
        if (index.value() < thisObject->wrapped().length()) {
            auto value = toJS<IDLDOMString>(*lexicalGlobalObject, throwScope, thisObject->wrapped().item(index.value()));
            RETURN_IF_EXCEPTION(throwScope, false);
            slot.setValue(thisObject, static_cast<unsigned>(JSC::PropertyAttribute::ReadOnly), value);
            return true;
        }
        return JSObject::getOwnPropertySlot(object, lexicalGlobalObject, propertyName, slot);
    }
    using GetterIDLType = IDLDOMString;
    auto getterFunctor = visibleNamedPropertyItemAccessorFunctor<GetterIDLType, JSTestNamedDeleterWithIndexedGetter>([] (JSTestNamedDeleterWithIndexedGetter& thisObject, PropertyName propertyName) -> decltype(auto) {
        return thisObject.wrapped().namedItem(propertyNameToAtomString(propertyName));
    });
    if (auto namedProperty = accessVisibleNamedProperty<LegacyOverrideBuiltIns::No>(*lexicalGlobalObject, *thisObject, propertyName, getterFunctor)) {
        auto value = toJS<IDLDOMString>(*lexicalGlobalObject, throwScope, WTFMove(namedProperty.value()));
        RETURN_IF_EXCEPTION(throwScope, false);
        slot.setValue(thisObject, static_cast<unsigned>(JSC::PropertyAttribute::ReadOnly), value);
        return true;
    }
    return JSObject::getOwnPropertySlot(object, lexicalGlobalObject, propertyName, slot);
}

bool JSTestNamedDeleterWithIndexedGetter::getOwnPropertySlotByIndex(JSObject* object, JSGlobalObject* lexicalGlobalObject, unsigned index, PropertySlot& slot)
{
    VM& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* thisObject = jsCast<JSTestNamedDeleterWithIndexedGetter*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    if (LIKELY(index <= MAX_ARRAY_INDEX)) {
        if (index < thisObject->wrapped().length()) {
            auto value = toJS<IDLDOMString>(*lexicalGlobalObject, throwScope, thisObject->wrapped().item(index));
            RETURN_IF_EXCEPTION(throwScope, false);
            slot.setValue(thisObject, static_cast<unsigned>(JSC::PropertyAttribute::ReadOnly), value);
            return true;
        }
        return JSObject::getOwnPropertySlotByIndex(object, lexicalGlobalObject, index, slot);
    }
    auto propertyName = Identifier::from(vm, index);
    using GetterIDLType = IDLDOMString;
    auto getterFunctor = visibleNamedPropertyItemAccessorFunctor<GetterIDLType, JSTestNamedDeleterWithIndexedGetter>([] (JSTestNamedDeleterWithIndexedGetter& thisObject, PropertyName propertyName) -> decltype(auto) {
        return thisObject.wrapped().namedItem(propertyNameToAtomString(propertyName));
    });
    if (auto namedProperty = accessVisibleNamedProperty<LegacyOverrideBuiltIns::No>(*lexicalGlobalObject, *thisObject, propertyName, getterFunctor)) {
        auto value = toJS<IDLDOMString>(*lexicalGlobalObject, throwScope, WTFMove(namedProperty.value()));
        RETURN_IF_EXCEPTION(throwScope, false);
        slot.setValue(thisObject, static_cast<unsigned>(JSC::PropertyAttribute::ReadOnly), value);
        return true;
    }
    return JSObject::getOwnPropertySlotByIndex(object, lexicalGlobalObject, index, slot);
}

void JSTestNamedDeleterWithIndexedGetter::getOwnPropertyNames(JSObject* object, JSGlobalObject* lexicalGlobalObject, PropertyNameArray& propertyNames, DontEnumPropertiesMode mode)
{
    VM& vm = JSC::getVM(lexicalGlobalObject);
    auto* thisObject = jsCast<JSTestNamedDeleterWithIndexedGetter*>(object);
    ASSERT_GC_OBJECT_INHERITS(object, info());
    for (unsigned i = 0, count = thisObject->wrapped().length(); i < count; ++i)
        propertyNames.add(Identifier::from(vm, i));
    for (auto& propertyName : thisObject->wrapped().supportedPropertyNames())
        propertyNames.add(Identifier::fromString(vm, propertyName));
    JSObject::getOwnPropertyNames(object, lexicalGlobalObject, propertyNames, mode);
}

bool JSTestNamedDeleterWithIndexedGetter::deleteProperty(JSCell* cell, JSGlobalObject* lexicalGlobalObject, PropertyName propertyName, DeletePropertySlot& slot)
{
    auto& thisObject = *jsCast<JSTestNamedDeleterWithIndexedGetter*>(cell);
    auto& impl = thisObject.wrapped();
    if (auto index = parseIndex(propertyName))
        return !impl.isSupportedPropertyIndex(index.value());
    if (isVisibleNamedProperty<LegacyOverrideBuiltIns::No>(*lexicalGlobalObject, thisObject, propertyName)) {
        using ReturnType = decltype(impl.deleteNamedProperty(propertyNameToString(propertyName)));
        static_assert(std::is_same_v<ReturnType, ExceptionOr<bool>> || std::is_same_v<ReturnType, bool>, "The implementation of named deleters without an identifier must return either bool or ExceptionOr<bool>.");
        return performLegacyPlatformObjectDeleteOperation(*lexicalGlobalObject, [&] { return impl.deleteNamedProperty(propertyNameToString(propertyName)); });
    }
    return JSObject::deleteProperty(cell, lexicalGlobalObject, propertyName, slot);
}

bool JSTestNamedDeleterWithIndexedGetter::deletePropertyByIndex(JSCell* cell, JSGlobalObject* lexicalGlobalObject, unsigned index)
{
    auto& thisObject = *jsCast<JSTestNamedDeleterWithIndexedGetter*>(cell);
    auto& impl = thisObject.wrapped();
    return !impl.isSupportedPropertyIndex(index);
}

JSC_DEFINE_CUSTOM_GETTER(jsTestNamedDeleterWithIndexedGetterConstructor, (JSGlobalObject* lexicalGlobalObject, EncodedJSValue thisValue, PropertyName))
{
    VM& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSTestNamedDeleterWithIndexedGetterPrototype*>(JSValue::decode(thisValue));
    if (UNLIKELY(!prototype))
        return throwVMTypeError(lexicalGlobalObject, throwScope);
    return JSValue::encode(JSTestNamedDeleterWithIndexedGetter::getConstructor(JSC::getVM(lexicalGlobalObject), prototype->globalObject()));
}

JSC::GCClient::IsoSubspace* JSTestNamedDeleterWithIndexedGetter::subspaceForImpl(JSC::VM& vm)
{
    return WebCore::subspaceForImpl<JSTestNamedDeleterWithIndexedGetter, UseCustomHeapCellType::No>(vm,
        [] (auto& spaces) { return spaces.m_clientSubspaceForTestNamedDeleterWithIndexedGetter.get(); },
        [] (auto& spaces, auto&& space) { spaces.m_clientSubspaceForTestNamedDeleterWithIndexedGetter = std::forward<decltype(space)>(space); },
        [] (auto& spaces) { return spaces.m_subspaceForTestNamedDeleterWithIndexedGetter.get(); },
        [] (auto& spaces, auto&& space) { spaces.m_subspaceForTestNamedDeleterWithIndexedGetter = std::forward<decltype(space)>(space); }
    );
}

void JSTestNamedDeleterWithIndexedGetter::analyzeHeap(JSCell* cell, HeapAnalyzer& analyzer)
{
    auto* thisObject = jsCast<JSTestNamedDeleterWithIndexedGetter*>(cell);
    analyzer.setWrappedObjectForCell(cell, &thisObject->wrapped());
    if (thisObject->scriptExecutionContext())
        analyzer.setLabelForCell(cell, "url " + thisObject->scriptExecutionContext()->url().string());
    Base::analyzeHeap(cell, analyzer);
}

bool JSTestNamedDeleterWithIndexedGetterOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, AbstractSlotVisitor& visitor, const char** reason)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    UNUSED_PARAM(reason);
    return false;
}

void JSTestNamedDeleterWithIndexedGetterOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsTestNamedDeleterWithIndexedGetter = static_cast<JSTestNamedDeleterWithIndexedGetter*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsTestNamedDeleterWithIndexedGetter->wrapped(), jsTestNamedDeleterWithIndexedGetter);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7TestNamedDeleterWithIndexedGetter@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore33TestNamedDeleterWithIndexedGetterE[]; }
#endif
#endif

JSC::JSValue toJSNewlyCreated(JSC::JSGlobalObject*, JSDOMGlobalObject* globalObject, Ref<TestNamedDeleterWithIndexedGetter>&& impl)
{

    if constexpr (std::is_polymorphic_v<TestNamedDeleterWithIndexedGetter>) {
#if ENABLE(BINDING_INTEGRITY)
        const void* actualVTablePointer = getVTablePointer(impl.ptr());
#if PLATFORM(WIN)
        void* expectedVTablePointer = __identifier("??_7TestNamedDeleterWithIndexedGetter@WebCore@@6B@");
#else
        void* expectedVTablePointer = &_ZTVN7WebCore33TestNamedDeleterWithIndexedGetterE[2];
#endif

        // If you hit this assertion you either have a use after free bug, or
        // TestNamedDeleterWithIndexedGetter has subclasses. If TestNamedDeleterWithIndexedGetter has subclasses that get passed
        // to toJS() we currently require TestNamedDeleterWithIndexedGetter you to opt out of binding hardening
        // by adding the SkipVTableValidation attribute to the interface IDL definition
        RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    }
    return createWrapper<TestNamedDeleterWithIndexedGetter>(globalObject, WTFMove(impl));
}

JSC::JSValue toJS(JSC::JSGlobalObject* lexicalGlobalObject, JSDOMGlobalObject* globalObject, TestNamedDeleterWithIndexedGetter& impl)
{
    return wrap(lexicalGlobalObject, globalObject, impl);
}

TestNamedDeleterWithIndexedGetter* JSTestNamedDeleterWithIndexedGetter::toWrapped(JSC::VM&, JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSTestNamedDeleterWithIndexedGetter*>(value))
        return &wrapper->wrapped();
    return nullptr;
}

}
