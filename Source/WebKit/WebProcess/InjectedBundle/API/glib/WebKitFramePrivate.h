/*
 * Copyright (C) 2013 Igalia S.L.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#pragma once

#include "WebFrame.h"
#include "WebKitFrame.h"
#include "WebKitScriptWorld.h"
#include <WebCore/Element.h>
#include <wtf/RefPtr.h>
#include <wtf/Vector.h>
#include <wtf/glib/GRefPtr.h>

WebKitFrame* webkitFrameCreate(WebKit::WebFrame*);
WebKit::WebFrame* webkitFrameGetWebFrame(WebKitFrame*);
GRefPtr<JSCValue> webkitFrameGetJSCValueForElementInWorld(WebKitFrame*, WebCore::Element&, WebKitScriptWorld*);
Vector<GRefPtr<JSCValue>> webkitFrameGetJSCValuesForElementsInWorld(WebKitFrame*, const Vector<RefPtr<WebCore::Element>>&, WebKitScriptWorld*);
