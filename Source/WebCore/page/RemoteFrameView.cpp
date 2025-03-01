/*
 * Copyright (C) 2023 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "RemoteFrameView.h"

#include "RemoteFrame.h"

namespace WebCore {

RemoteFrameView::RemoteFrameView(RemoteFrame& frame)
    : m_frame(frame)
{
}

// FIXME: Implement all the stubs below.

void RemoteFrameView::invalidateRect(const IntRect&)
{
}

bool RemoteFrameView::isActive() const
{
    return false;
}

bool RemoteFrameView::forceUpdateScrollbarsOnMainThreadForPerformanceTesting() const
{
    return false;
}

ScrollableArea* RemoteFrameView::enclosingScrollableArea() const
{
    return nullptr;
}

bool RemoteFrameView::isScrollableOrRubberbandable()
{
    return false;
}

bool RemoteFrameView::hasScrollableOrRubberbandableAncestor()
{
    return false;
}

IntRect RemoteFrameView::scrollableAreaBoundingBox(bool*) const
{
    return { };
}

bool RemoteFrameView::shouldPlaceVerticalScrollbarOnLeft() const
{
    return false;
}

void RemoteFrameView::invalidateScrollbarRect(Scrollbar&, const IntRect&)
{
}

HostWindow* RemoteFrameView::hostWindow() const
{
    return nullptr;
}

IntRect RemoteFrameView::windowClipRect() const
{
    return { };
}

void RemoteFrameView::paintContents(GraphicsContext&, const IntRect&, SecurityOriginPaintPolicy, EventRegionContext*)
{
}

void RemoteFrameView::addedOrRemovedScrollbar()
{
}

void RemoteFrameView::delegatedScrollingModeDidChange()
{
}

void RemoteFrameView::updateScrollCorner()
{
}

bool RemoteFrameView::scrollContentsFastPath(const IntSize&, const IntRect&, const IntRect&)
{
    return false;
}

bool RemoteFrameView::isVerticalDocument() const
{
    return false;
}

bool RemoteFrameView::isFlippedDocument() const
{
    return false;
}

bool RemoteFrameView::shouldDeferScrollUpdateAfterContentSizeChange()
{
    return false;
}

void RemoteFrameView::scrollOffsetChangedViaPlatformWidgetImpl(const ScrollOffset&, const ScrollOffset&)
{
}

void RemoteFrameView::unobscuredContentSizeChanged()
{
}

void RemoteFrameView::didFinishProhibitingScrollingWhenChangingContentSize()
{
}

void RemoteFrameView::updateLayerPositionsAfterScrolling()
{
}

void RemoteFrameView::updateCompositingLayersAfterScrolling()
{
}

} // namespace WebCore
